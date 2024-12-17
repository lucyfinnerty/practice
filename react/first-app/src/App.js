import React from 'react';
import logo from './logo.svg';
import './App.css';
//import CalculatorButton from './CalculatorButton';
import CalculatorPanel from './CalculatorPanel';

function App() {
  return (
    <div className="App">
      <header className="App-header">
        <CalculatorPanel />
      </header>
    </div>
  );
}

export default App;