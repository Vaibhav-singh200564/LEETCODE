class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> ans;

        for (int i = 0; i < n; i++) {
            if (nums[i] < k) {
                ans.push_back(nums[i]);
            }
        }
        return ans.size();
    }
};
