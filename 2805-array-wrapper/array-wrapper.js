/**
 * @param {number[]} nums
 * @return {void}
 */
var ArrayWrapper = function(nums) {
    this.nums = nums;   // store array
};

/**
 * @return {number}
 */
ArrayWrapper.prototype.valueOf = function() {
    // return sum of array
    return this.nums.reduce((sum, num) => sum + num, 0);
};

/**
 * @return {string}
 */
ArrayWrapper.prototype.toString = function() {
    // return string format [1,2,3]
    return `[${this.nums.join(',')}]`;
};