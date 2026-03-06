/**
 * @return {Function}
 */
var createHelloWorld = function() {
    // Return a function that always returns "Hello World"
    return function() {
        return "Hello World";
    }
};

/**
 * Example usage:
 */
const f = createHelloWorld();
console.log(f()); // "Hello World"