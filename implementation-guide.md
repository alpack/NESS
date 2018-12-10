---
description: >-
  A detailed documentation of NESS's requirements and a step-by-step
  implementation guide for both web and desktop applications.
---

# IMPLEMENTATION

## NESS Web Application

NESS Web Application is a [Progressive Web Application](https://developers.google.com/web/progressive-web-apps/) \(PWA\) which was built on integrated AWS services. The application allows users securely authenticate themselves in order to create a profile and start using the solution. Once authenticated, users will own a profile which they may create a hero representation of themselves. The hero may have an unlimited amount of skills that reflect on the user's real life abilities, post quests which represent real life projects that individuals, groups or institutions are working on and attach requirements to join the quest. Furthermore, users may search for quests they'd like to join, or for heroes they'd like to recruit - indirectly, though, by filtering skills and experience. Once completed, all participant heroes will acquire experience. The amount of experience gained may then be added to level up skill experience; however, only on those skills that were used for the quest.

## Overview

![](.gitbook/assets/arch.png)

* **React** for front-end development integration with Amplify;
* **Amplify** framework to integrate AWS Services below...
* **Cognito** for user authentication and permission management;
* **AppSync** for offline and real-time capabilities;
* **GraphQL** integrated by AppSync, provides Mutations, Queries and Subscriptions;
* **AmazonDB** \(NoSQL\) as Data Sources for Heroes, Squads, Quests and Skills;
* **Amazon S3** for storing pictures for Heroes, Squad banners, or Skill thumbnails
* **Amazon Elasticsearch** as Data Source for full text search on skills amongst other hero attributes.
* **Amazon Cloudfront** for continuous deployment and Hosting

## **Prerequisites**

1. **Server** must be Linux or Mac OS system;
2. **Owner** must have an [AWS Account](https://aws.amazon.com/mobile/details);
3. **Server** must have [NodeJS](https://nodejs.org/en/download/) with [NPM](https://docs.npmjs.com/getting-started/installing-node) installed;
4. **Server** must have [AWS Amplify CLI](https://github.com/aws-amplify/amplify-cli) ;
5. **Owner** must clone NESS Project from ALPACK's GitHub
6. **Owner** must configure _Amplify_ to run on a region where _all_ _services are available_;
7. **Mac OS:** HomeBrew \(_recommended_\): ****[**https://brew.sh/index\_pt-br**](https://brew.sh/index_pt-br)
8. **Server** must have Git ****installed
   1. **Linux:** sudo apt install git
   2. **Mac**: brew install git

## Initial Setup

> The following setup walkthrough ensures the completion of the initial configuration \(one-time\) for the Web Application

### Creating an AWS Account 

Creating an Amazon Web Services account:

1. **Go** **to**: [https://aws.amazon.com/free/](https://aws.amazon.com/free/)
2. **Follow** as instructed
3. **Be sure** _to add a valid credit card_
4. **Ensure** you chose the _Basic_ plan - you may change later if you wish. For now, lets stick to the free Tier.

### Installing NodeJS & NPM

Node Version Manager is the safest way to use Node and NPM:

1. **Got to**: [https://github.com/creationix/nvm](https://github.com/creationix/nvm)
2. **Copy and paste** the installation script on you terminal \(as of 12/10/2018\): 

   ```bash
   curl -o- https://raw.githubusercontent.com/creationix/nvm/v0.33.11/install.sh | bash
   ```

3. **Close then reopen** your terminal
4. **Install** Node's latest version using NVM, then initialise it:

   ```bash
   nvm install node
   nvm use node
   ```

### Installing the CLI

Next, install the latest AWS Amplify CLI, globally:

```bash
npm install -g @aws-amplify/cli@multienv
```

### Cloning Project from Github

Clone NESS Project from ALPACK's GitHub organisation and install the dependencies for the project with NPM:

```bash
git clone https://github.com/alpack/NESS.git
cd NESS
```

### Setting Environment 

Initializing Amplify project:

```bash
amplify init
? Do you want to use an existing environment? No
# Enter as instructed on the following init steps
```

Configuring Amazon Cognito User Pool to manage authentication:

```bash
amplify add auth
? Do you want to use the default authentication and security configuration? Yes, use the default configuration.
Successfully added resource cognito<#####> locally
```

Configuring Amazon S3 bucket to store pictures:

```bash
amplify add storage
? Please select from one of the belo mentioned services: Content (Images, audio, video, etc.)
? Please provide a friendly name for your resource that will be used to label this category in the project: <resource-name>
? Please provide a bucket name: <bucket-name>
? Who should have access: Auth and guest users
? What kind of access do you want for Authenticated users: read/write
? What kind of access do you want for Guest users: read
Successfully added auth resource locally
Successfully added auth resource <resource-name> locally
```

Configuring AWS AppSync \(GraphQL\) API:

```text
amplify add api
? Please select from one of the below mentioned services: GraphQL
? Provide API name: <api-name>
? Choose an authorization type for the API: Amazon Cognito User Pool
? Do you have an annotated GraphQL Schema? Yes
Provide your schema file path: schema.grapql
```

Deploy the application

```text
amplify push
? Would you like to generate client code? no
```

Install project dependencies & run the application

```text
npm install
npm run start
```

More information on working on multiple environments with Amplify [here!](https://aws-amplify.github.io/docs/cli/multienv?sdk=js)

## NESS Desktop Application

NESS Desktop Application is a 

## Overview

* **GCC** for compiling files written in C programming language
* **G++** for compiling files written in C++ programming language
* **Python 3.6** for manipulating files in json format alongside C;
* **JSON** to communicate NESS Web Application with C/C++;
* **Makefile** to compile and build files into binary executable;
* **Bash** to automate the process of building the application;

## **Prerequisites**

1. **Server** must be Linux or Mac OS system;
2. **Server** must have a G++ compiler installed;
3. **Server** must have a GCC compiler installed;
4. **Server** must have Python 3.6, or above, installed ;
5. **Owner** must clone NESS Project from ALPACK's GitHub
6. **Owner** must build the application;

## Initial Setup

> The following setup walkthrough ensures the completion of the initial configuration \(one-time\) for the Desktop Application

```text
$ make database
// if you need some mock data, we got you! 
// $ make mockfiles
```

Now, you can build the project and enjoy our application!

```text
$ make
$ cd bin
./NESS 
#Enjoy!
```

