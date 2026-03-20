/**
 * @param {Function} fn
 * @return {Object}
 */
Array.prototype.groupBy = function(fn) {
    const result = {}; // object to store grouped items
    for (let item of this) {
        const key = fn(item); // get the key using the callback
        if (!result[key]) {
            result[key] = []; // initialize array if key doesn't exist
        }
        result[key].push(item); // push item into the corresponding key array
    }
    return result;
};

// Examples
console.log(
  [{"id":"1"},{"id":"1"},{"id":"2"}].groupBy(item => item.id)
);
// Output: { "1": [{"id":"1"}, {"id":"1"}], "2": [{"id":"2"}] }

console.log(
  [[1,2,3],[1,3,5],[1,5,9]].groupBy(list => String(list[0]))
);
// Output: { "1": [[1,2,3],[1,3,5],[1,5,9]] }

console.log(
  [1,2,3,4,5,6,7,8,9,10].groupBy(n => String(n > 5))
);
// Output: { "true": [6,7,8,9,10], "false": [1,2,3,4,5] }