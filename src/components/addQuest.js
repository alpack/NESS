import React from 'react'
import Amplify, { graphqlOperation } from "aws-amplify"
import { Connect } from "aws-amplify-react"

import * as mutations from './graphql/mutations';
import * as queries from './graphql/queries';
import * as subscriptions from './graphql/subscriptions';

class addQuest extends React.Component {
  constructor(props) {
    super(props);
    this.state = {
        name: '',
        description: '',
    };
  }

  handleChange(name, ev) {
      this.setState({ [name]: ev.target.value });
  }

  async submit() {
    const { onCreate } = this.props;
    var input = {
      name: this.state.name,
      description: this.state.description
    }
    console.log(input);
    await onCreate({input})
  }

  render(){
    return (
        <div>
            <input
                name="name"
                placeholder="name"
                onChange={(ev) => { this.handleChange('name', ev)}}
            />
            <input
                name="description"
                placeholder="description"
                onChange={(ev) => { this.handleChange('description', ev)}}
            />
            <button onClick={this.submit.bind(this)}>
                Add
            </button>
        </div>
    );
  }
}

class QuestList extends React.Component {
  render() {

    const ListView = ({ todos }) => (
      <div>
          <h3>All Todos</h3>
            <ul>
                {todos.map(todo => <li key={todo.id}>{todo.name}</li>)}
            </ul>
      </div>
    )

    return (
      <div className="App">
        <Connect mutation={graphqlOperation(mutations.createQuest)}>
          {({mutation}) => (
            <addQuest onCreate={mutation} />
          )}
        </Connect>

        <Connect query={graphqlOperation(queries.listTodos)}
          subscription={graphqlOperation(subscriptions.onCreateQuest)}
          onSubscriptionMsg={(prev, {onCreateQuest}) => {
              console.log('Subscription data:', onCreateQuest)
              return prev;
            }
          }>
        {({ data: { listTodos }, loading, error }) => {
          if (error) return <h3>Error</h3>;
          if (loading || !listTodos) return <h3>Loading...</h3>;
            return <ListView todos={listTodos.items} />
        }}
        </Connect>
      </div>

    );
  }
}

export default { addQuest, QuestList }