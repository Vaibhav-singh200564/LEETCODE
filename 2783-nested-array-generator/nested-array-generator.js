/**
 * @param {Array} arr
 * @return {Generator}
 */
var inorderTraversal = function* (arr) {
    for (let item of arr) {
        if (Array.isArray(item)) {
            // If item is an array, recursively yield its elements
            yield* inorderTraversal(item);
        } else {
            // If item is an integer, yield it
            yield item;
        }
    }
};

// Example usage:
const gen = inorderTraversal([[[6]], [1, 3], []]);
console.log(gen.next().value); // 6
console.log(gen.next().value); // 1
console.log(gen.next().value); // 3
console.log(gen.next().done);  // true