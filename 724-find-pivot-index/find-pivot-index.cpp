class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return -1;  // handle empty array

        // Calculate total sum of array
        int total = 0;
        for (int x : nums) total += x;

        int leftSum = 0;
        for (int i = 0; i < n; i++) {
            // Right sum = total - leftSum - nums[i]
            if (leftSum == total - leftSum - nums[i]) {
                return i; // pivot found
            }
            leftSum += nums[i];
        }

        return -1; // no pivot found
    }
};
