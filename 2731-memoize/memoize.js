/**
 * @param {Function} fn
 * @return {Function}
 */
function memoize(fn) {
    const cache = new Map(); // to store results

    return function(...args) {
        // create unique key from arguments
        const key = JSON.stringify(args);

        // if already computed → return cached value
        if (cache.has(key)) {
            return cache.get(key);
        }

        // otherwise compute result
        const result = fn(...args);

        // store in cache
        cache.set(key, result);

        return result;
    }
}