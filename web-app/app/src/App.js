import React, { Component } from 'react';
import './App.css';

import { Grid } from 'semantic-ui-react';
import { AlbumsListLoader } from './components/allQuests';

import Amplify from 'aws-amplify';
import { withAuthenticator } from 'aws-amplify-react';
import aws_exports from './aws-exports';
Amplify.configure(aws_exports);

class App extends Component {
  render() {
    return (
      <div className="App">
        <Grid padded>
          <Grid.Column>
            <AlbumsListLoader />
          </Grid.Column>
        </Grid>
      </div>
    );
  }
}

export default withAuthenticator(App, { includeGreetings: true });