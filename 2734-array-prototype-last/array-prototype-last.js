/**
 * @return {any} last element of array or -1 if empty
 */
Array.prototype.last = function() {
    return this.length > 0 ? this[this.length - 1] : -1;
};

// Example usage:
const nums1 = [null, {}, 3];
console.log(nums1.last()); // 3

const nums2 = [];
console.log(nums2.last()); // -1