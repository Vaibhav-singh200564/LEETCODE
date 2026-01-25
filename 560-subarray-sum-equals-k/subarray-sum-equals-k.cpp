class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0; // total count of subarrays

        for (int i = 0; i < n; i++) {
            int sum = 0;
            for (int j = i; j < n; j++) { // include subarrays of length 1
                sum += nums[j];           // add current element
                if (sum == k) count++;    // check if sum equals k
            }
        }

        return count;
    }
};
