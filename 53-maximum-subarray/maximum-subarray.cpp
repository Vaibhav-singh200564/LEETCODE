class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int minPrefix = 0, maxSum = INT_MIN, prefixSum = 0;

        for (int num : nums) {
            prefixSum += num;
            maxSum = max(maxSum, prefixSum - minPrefix);
            minPrefix = min(minPrefix, prefixSum);
        }

        return maxSum;
    }
};
