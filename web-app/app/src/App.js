import React, { Component } from 'react';
import './App.css';
import image from './img/Background_NESS.jpg';

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
				<Grid padded>
					<Grid.Column>
						<HerosListLoader/>
					</Grid.Column>
				</Grid>
			</div>
		);
	}
}

export default withAuthenticator(App, { includeGreetings: true });
