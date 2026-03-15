var TimeLimitedCache = function() {
    this.cache = new Map();
};

/** 
 * @param {number} key
 * @param {number} value
 * @param {number} duration time until expiration in ms
 * @return {boolean} if un-expired key already existed
 */
TimeLimitedCache.prototype.set = function(key, value, duration) {

    const now = Date.now();
    const expireTime = now + duration;

    let existed = false;

    if (this.cache.has(key)) {
        const entry = this.cache.get(key);
        if (entry.expire > now) {
            existed = true;
        }
    }

    this.cache.set(key, {value: value, expire: expireTime});

    return existed;
};

/** 
 * @param {number} key
 * @return {number} value associated with key
 */
TimeLimitedCache.prototype.get = function(key) {

    const now = Date.now();

    if (!this.cache.has(key)) return -1;

    const entry = this.cache.get(key);

    if (entry.expire > now) {
        return entry.value;
    }

    return -1;
};

/** 
 * @return {number} count of non-expired keys
 */
TimeLimitedCache.prototype.count = function() {

    const now = Date.now();
    let count = 0;

    for (let [key, entry] of this.cache) {
        if (entry.expire > now) {
            count++;
        }
    }

    return count;
};