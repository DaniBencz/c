// JS equivalent of static variables in C

// #1 using closure
const createCounter = () => {
    let count = 0; // Acts like a static variable

    return () => {
        return count++;
    };
};

const counter = createCounter();
console.log(counter()); // Outputs: 1
console.log(counter()); // Outputs: 2
console.log(counter()); // Outputs: 3

// #2 using class
class Tally {
    static staticVariable = 0;

    static counter() {
        return this.staticVariable++;
    }
}

console.log(Tally.staticVariable); // 0
console.log(Tally.counter()); // 0
console.log(Tally.counter()); // 1
console.log(Tally.counter()); // 2
