class Solution {
public:
    int minOperations(vector<int>& nums) {
        int operations = 0;

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] <= nums[i - 1]) {
                int needed = nums[i - 1] + 1;
                operations += needed - nums[i];
                nums[i] = needed; // make it strictly increasing
            }
        }
        return operations;
    }
};
