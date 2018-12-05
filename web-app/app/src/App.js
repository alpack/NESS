import React, { Component } from 'react';
import './style/App.css';

import aws_exports from './aws-exports';
import { withAuthenticator } from 'aws-amplify-react';
import Amplify from 'aws-amplify';

import { Grid } from 'semantic-ui-react';
import HerosListLoader from './components/allHeros';

Amplify.configure(aws_exports);

class App extends Component {
	render() {
		return (
			<div className="App-background">
				<h1 id="BemVindo">Bem Vindo</h1>
				<button id="searchButton" onClick="">Search Hero</button>
				<div className="heroList">
					<Grid padded>
						<Grid.Column>
							<HerosListLoader />
						</Grid.Column>
					</Grid>
				</div>
			</div>
		);
	}
}

export default withAuthenticator(App, { includeGreetings: true });
