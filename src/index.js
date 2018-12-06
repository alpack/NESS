<<<<<<< HEAD
import React from 'react'
import ReactDOM from 'react-dom'
import './style/index.css'
import App from './App'
import registerServiceWorker from './registerServiceWorker'
=======
import React from 'react';
import ReactDOM from 'react-dom';
import './style/index.css';
import App from './App';
import * as serviceWorker from './serviceWorker';
>>>>>>> b55177048203d07d86624cf53c6ec81f34827355

ReactDOM.render(<App />, document.getElementById('root'))

// If you want your app to work offline and load faster, you can change
// unregister() to register() below. Note this comes with some pitfalls.
// Learn more about service workers: http://bit.ly/CRA-PWA

<<<<<<< HEAD
registerServiceWorker()
=======
serviceWorker.unregister();
>>>>>>> b55177048203d07d86624cf53c6ec81f34827355
