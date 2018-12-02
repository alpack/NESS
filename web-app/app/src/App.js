// import React from 'react';
// import './App.css';

// import Amplify from 'aws-amplify';
// import { withAuthenticator } from 'aws-amplify-react';
// import aws_exports from './aws-exports';

// // import HerosListLoader from './components/allHeros';
// import { Connect } from 'aws-amplify-react';
// import { graphqlOperation }  from 'aws-amplify';
// import { Grid, Header, Input, List, Segment } from 'semantic-ui-react';

import React, { Component } from 'react';
import './App.css';

import aws_exports from './aws-exports';
import { withAuthenticator } from 'aws-amplify-react';
import Amplify from 'aws-amplify';

import { Grid } from 'semantic-ui-react';
import HerosListLoader from './components/allHeros';

Amplify.configure(aws_exports);

class App extends Component {
  render() {
    return (
        <Grid padded>
            <Grid.Column>
                <HerosListLoader />
            </Grid.Column>
        </Grid>
    );
  }
}

export default withAuthenticator(App, { includeGreetings: true });
