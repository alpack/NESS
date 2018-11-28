<template>
  <div>
    <amplify-connect :mutation="createTodoMutation"
        @done="onCreateFinished">
      <template slot-scope="{ loading, mutate, errors }">
        <input v-model="name" placeholder="item name" />
        <input v-model="description" placeholder="item description" />
        <button :disabled="loading" @click="mutate">Create Todo</button>
      </template>
    </amplify-connect>
  </div>
</template>

<script>
import { components } from 'aws-amplify-vue';

const CreateTodoMutation = `mutation CreateTodo($name: String!, $description: String) {
    createTodo(input: { name: $name, description: $description }) {
      id
      name
    }
  }`;

export default {
  name: 'NewTodo',
  components: {
    ...components
  },
  data() {
    return {
      name: '',
      description: ''
    }
  },
  computed: {
    createTodoMutation() {
      return this.$Amplify.graphqlOperation(CreateTodoMutation,
        { name: this.name, description: this.description });
    }
  },
  methods: {
    onCreateFinished() {
      console.log('Todo created!');
    }
  }
}
</script>