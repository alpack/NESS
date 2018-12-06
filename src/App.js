<<<<<<< HEAD
import React, { Component } from 'react'
=======
import React, { Component } from 'react';
import './style/App.css';

import aws_exports from './aws-exports';
import { withAuthenticator } from 'aws-amplify-react';
import Amplify from 'aws-amplify';

>>>>>>> b55177048203d07d86624cf53c6ec81f34827355
import { Grid } from 'semantic-ui-react';
import 'semantic-ui-css/semantic.min.css'
import './App.css'

import Amplify, { Auth, Storage } from 'aws-amplify'
import { withAuthenticator, AmplifyTheme } from 'aws-amplify-react'
import { AWSAppSyncClient } from 'aws-appsync'
import { Rehydrated } from 'aws-appsync-react'
import { ApolloProvider } from 'react-apollo'

import HeroesList from './components/allHeroes'

import aws_exports from './aws-exports'
Amplify.configure(aws_exports)

Storage.configure({ level: 'private' })

const client = new AWSAppSyncClient({
    url: aws_exports.aws_appsync_graphqlEndpoint,
    region: aws_exports.aws_appsync_region,
    auth: {
        type: aws_exports.aws_appsync_authenticationType,
        apiKey: aws_exports.apiKey,
        jwtToken: async () => (await Auth.currentSession()).getAccessToken().getJwtToken(),
    },
    complexObjectsCredentials: () => Auth.currentCredentials(),
    cacheOptions: { dataIdFromObject: (obj) => `${obj.__typename}:${obj.myKey}` }
})

class App extends Component {
<<<<<<< HEAD

=======
>>>>>>> b55177048203d07d86624cf53c6ec81f34827355
	render() {
		return (
			<div className="App-background">
				<h1 id="BemVindo">Bem Vindo</h1>
<<<<<<< HEAD
                <button id="searchButton" onClick="">Search Hero</button>
                <div className="heroList">
					<Grid padded>
						<Grid.Column>
							<HeroesList />
=======
				<button id="searchButton" onClick="">Search Hero</button>
				<div className="heroList">
					<Grid padded>
						<Grid.Column>
							<HerosListLoader />
>>>>>>> b55177048203d07d86624cf53c6ec81f34827355
						</Grid.Column>
					</Grid>
				</div>
			</div>
		);
	}
}

const AppWithAuth = withAuthenticator(App, { includeGreetings: true })

export default () => (
  <ApolloProvider client={client}>
    <Rehydrated>
      <AppWithAuth />
    </Rehydrated>
  </ApolloProvider>
)