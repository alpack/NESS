---
description: >-
  A series of thoughtful recommendations for implementing the solution
  seamlessly.
---

# RECOMMENDATIONS

## Employee Profile for Implementation

It's recommended by the ALPACK team that the person responsible for implementing the solution has some experience with the following technologies:

* **GitHub**: must be able to understand where to find repositories, how to clone them and how to update them;
* **Amazon Web Services**: person must be familiar with the console and services available. AWS console might get confusing and using the console inappropriately might lead one to unintentionally register for services which the client will get charged for, or cause conflicts when pushing changes;
* **Amplify**: must understand how the framework behaves and integrates different AWS services in order to prevent crashes or outdated stacks;
* **AppSync**: requires superficial knowledge about GraphQL usage and authorization with directives;
* **GraphQL:** requires superficial knowledge on setting GraphQL resolvers for mutations, queries and subscriptions;
* **React:** requires superficial knowledge with front-end development using React.

## Maintenance  <a id="perfil-de-pessoa-para-implementar-o-projeto"></a>

To assure that the application works fluidly, without interruptions, it's necessary that there is regular maintenance regarding the installed npm packages. Solutions developed in JavaScript require extra attention when dealing with packages. That is, specific packages and versions might conflict with each other as well as methods might become deprecated - breaking the app build and consequently, interrupting the service. 

### How to Keep Packages Updated?

Automated Package Managers such as [Greenkeeper](https://greenkeeper.io/), not only are free to Open-Source projects, but also have a ton of other functionalities that enable users to monitor their projects closely and keep them updated passively and safely.

A second alternative is to make use of solutions such as Renovate. Renovate scans all repositories for `package.json` files and checks if there are any new versions in npm registry. If there are new versions available, Renovate creates a new branch for testing package updates. If the update passes the tests, the application will make a pull-request for the user to accept or deny changes made. Its a simple and secure way to keep packages updated.  




