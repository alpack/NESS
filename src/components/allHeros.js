import React from 'react';
import { Connect } from 'aws-amplify-react';
import { graphqlOperation } from 'aws-amplify';
import { Header, List} from 'semantic-ui-react';
import './allHeroes.css';

// Create a function we can use to sort an array of objects by a common property
function makeComparator(key, order = 'asc') {
	return (a, b) => {
		if (!a.hasOwnProperty(key) || !b.hasOwnProperty(key)) return 0;

		const aVal = typeof a[key] === 'string' ? a[key].toUpperCase() : a[key];
		const bVal = typeof b[key] === 'string' ? b[key].toUpperCase() : b[key];

		let comparison = 0;
		if (aVal > bVal) comparison = 1;
		if (aVal < bVal) comparison = -1;

		return order === 'desc' ? comparison * -1 : comparison;
	};
}

// Add string to query all heroes
const ListHeros = `query {
    listHeros(limit: 9999) {
        items {
			id
			name
        }
    }
}`;

// Add an HerosList component for rendering list of heroes
class HerosList extends React.Component {
	heroItems() {
		return this.props.heros.sort(makeComparator('name')).map((hero) => <li key={hero.id}>{hero.name}</li>);
	}

	render() {
		return (
			<div className="HerosListLoader">
				<Header as="h3">Meus Herois</Header>
				<List divided relaxed>
					{this.heroItems()}
				</List>
			</div>
		);
	}
}

// Add an HerosListLoader component that will use the connect component from Amplify to provide data to HerosList
export default class HerosListLoader extends React.Component {
	render() {
		return (
			<Connect query={graphqlOperation(ListHeros)}>
				{({ data, loading, errors }) => {
					if (loading) {
						return <div>Carregando Herois...</div>;
					}
					if (!data.listHeros) return;

					return <HerosList heros={data.listHeros.items} />;
				}}
			</Connect>
		);
	}
}
