import React from 'react'
import Amplify, { graphqlOperation } from "aws-amplify"
import { Connect } from "aws-amplify-react"
import './allHeroes.css'

import * as queries from './graphql/queries'
import * as subscriptions from './graphql/subscriptions'

class HeroesList extends React.Component {

    render() {
        const ListView = ({ hero }) => (
            <div>
                <h3>Todos Herois</h3>
                <ul>
                    { hero.map(hero => <li key={hero.id}> {hero.name} ({hero.id}) </li>) }
                </ul>
            </div>
        )

        return (
            <Connect     
                query={ graphqlOperation(queries.listHeros) }
                subscription={ graphqlOperation(subscriptions.onUpdateHero) }
                onSubscriptionMsg={ (prev, { onUpdateHero } ) => {
                    console.log ( onUpdateHero )
                    return prev;
                }}>
                {({ data: { listHeros }, loading, error }) => {
                    if (error) return (<h3> Error </h3>)
                    if (loading || !listHeros) return (<h3> Carregando... </h3>)
                    <ListView hero={listHeros.items} />
                }}
            </Connect>
        )
    }
}

export default { HeroesList }