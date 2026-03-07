/**
 * @param {Object|Array} obj
 * @return {boolean}
 */
var isEmpty = function(obj) {
    // If it's an array, check length
    if (Array.isArray(obj)) return obj.length === 0;
    // If it's an object, check number of keys
    return Object.keys(obj).length === 0;
};