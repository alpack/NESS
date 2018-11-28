<template>
    <div id="app">
      <div v-if="!signedIn">
         <amplify-authenticator></amplify-authenticator>
      </div>
      <div v-if="signedIn">
        <amplify-sign-out class="signout"></amplify-sign-out>
        <div>
          <div class="form">
            <input class="input" v-model="name" placeholder="Coffee Shop Name">
            <input class="input" v-model="description" placeholder="Coffee Shop Description">
            <button class='button' v-on:click="createCoffeeShop">Create Coffee Shop</button>
          </div>
          <div v-for="item in coffeeShops" :key="item.key" class='list-item'>
            <p class="name">{{ item.name }}</p>
            <p class="description">{{ item.description }}</p>
          </div>
        </div>
      </div>
    </div>
</template>

<script>
import { AmplifyEventBus } from 'aws-amplify-vue'
import { Storage, Auth, API, graphqlOperation } from 'aws-amplify'

const ListCoffeeShops = `
  query {
    listCoffeeShops {
      items {
        id name description
      }
    }
  }
`
const CreateCoffeeShop = `
  mutation($name: String! $description: String) {
    createCoffeeShop(input: {
      name: $name description: $description
    }) {
      id name description
    }
  }
`
const photoPickerConfig = {
  path: 'images/',
}

Storage.list('images/')
  .then(data => ('images from S3: ', data))
  .catch(err => console.log('error'))

export default {
  name: 'app',
  data () {
    return {
      name: '',
      description: '',
      coffeeShops: [],
      signedIn: false
    }
  },
  async beforeCreate() {
    const { data: { listCoffeeShops: { items }} } = await API.graphql(graphqlOperation(ListCoffeeShops))
    this.coffeeShops = items
    try {
      const user = await Auth.currentAuthenticatedUser()
      this.signedIn = true
    } catch (err) {
      this.signedIn = false
    }
    AmplifyEventBus.$on('authState', info => {
      if (info === 'signedIn') {
        this.signedIn = true
      } else {
        this.signedIn = false
      }
    });
  },
  methods: {
    async createCoffeeShop() {
      if (this.name === '' || this.description === '') {
        return
      }
      const coffeeShop = { name: this.name, description: this.description }
      const coffeeShops = [...this.coffeeShops, coffeeShop]
      this.coffeeShops = coffeeShops
      this.name = ''
      this.description = ''
      try {
        await API.graphql(graphqlOperation(CreateCoffeeShop, coffeeShop))
        console.log('coffee shop successfully created!')
      } catch (err) {
        console.log('error adding item: ', err)
      }
    },
  }
}
</script>

<style>
body {
  margin: 0
}
#app {
  font-family: 'Avenir', Helvetica, Arial, sans-serif;
  -webkit-font-smoothing: antialiased;
  -moz-osx-font-smoothing: grayscale;
  text-align: center;
  color: #2c3e50;
}
.container {
  padding: 40px;
}
.signout {
  background-color: #ededed;
  margin: 0;
  padding: 11px 0px 1px;
}
</style>