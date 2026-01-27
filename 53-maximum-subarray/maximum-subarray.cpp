class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int maxSum = nums[0];       // initialize to first element
        int prevSum = nums[0];      // running sum starting with first element

        // start loop from second element
        for (int i = 1; i < n; i++) {
            // either extend previous subarray or start new at nums[i]
            prevSum = max(nums[i], prevSum + nums[i]);

            // update maxSum if current running sum is bigger
            if (prevSum > maxSum) {
                maxSum = prevSum;
            }
        }

        return maxSum;
    }
};
