class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            // check only till distance k
            for (int j = i + 1; j <= i + k && j < n; j++) {
                
                if (nums[i] == nums[j]) {
                    return true;
                }
            }
        }

        return false;
    }
};