import Vue from 'vue'
import App from './App.vue'

import Amplify, * as AmplifyModules from 'aws-amplify'
import { AmplifyVue, AmplifyPlugin } from 'aws-amplify-vue'
import aws_exports from './aws-exports'
Amplify.configure(aws_exports)

Vue.use(AmplifyPlugin, AmplifyModules)
Vue.use(AmplifyVue.plugins.amplifyPlugin, {AmplifyModules})
Vue.config.productionTip = false

// It's important that you instantiate the Vue instance after calling Vue.use!
new Vue({
  render: h => h(App),
}).$mount('#app')
