import React, { Component } from 'react';
import { Connect } from 'aws-amplify-react';
import { graphqlOperation }  from 'aws-amplify';
import { Header, List, Segment } from 'semantic-ui-react';

function makeComparator(key, order = 'asc') {
    return (a, b) => {
        if (!a.hasOwnProperty(key) || !b.hasOwnProperty(key)) return 0;

        const aVal = (typeof a[key] === 'string') ? a[key].toUpperCase() : a[key];
        const bVal = (typeof b[key] === 'string') ? b[key].toUpperCase() : b[key];

        let comparison = 0;
        if (aVal > bVal) comparison = 1;
        if (aVal < bVal) comparison = -1;

        return order === 'desc' ? (comparison * -1) : comparison
    };
}

class AccountProfile extends Component {
    accountItems() {
        return this.props.hero.sort(makeComparator('name')).map(hero =>
            <li key={hero.id}>
                {hero.name}
            </li>);
    }

  render() {
    return (
      <Segment>
        <Header as='h3'>My Albums</Header>
        <List divided relaxed>
          {this.accountItems()}
        </List>
      </Segment>
    );
  }
}

const ListAlbums = `query ListAlbums {
    listAlbums(limit: 9999) {
        items {
            id
            name
        }
    }
}`;

class AlbumsListLoader extends Component {
  render() {
    return (
      <Connect query={graphqlOperation(ListAlbums)}>
        {({ data, loading, errors }) => {
          if (loading) { return <div>Loading...</div>; }
          if (!data.listAlbums) return;

          return <AccountProfile albums={data.listAlbums.items} />;
        }}
      </Connect>
    );
  }
}