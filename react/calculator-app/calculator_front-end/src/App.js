import React from 'react';
import logo from './logo.svg';
import './App.css';
//import CalculatorButton from './CalculatorButton';
import Calculator from './Calculator';
import CalculatorApi from './CalculatorApi';

function App() {
  return (
    <div className="App">
      <header className="App-header">
        <Calculator calculatorApi={new CalculatorApi('https://127.0.0.1:8080')} />
      </header>
    </div>
  );
}

export default App;