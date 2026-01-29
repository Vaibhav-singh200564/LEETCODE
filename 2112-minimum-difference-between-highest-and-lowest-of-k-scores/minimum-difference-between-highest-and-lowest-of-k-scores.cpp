class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int n = nums.size();
        if (k == 1) return 0;

        sort(nums.begin(), nums.end());

        int diff = INT_MAX;

        for (int i = 0; i <= n - k; i++) {
            int highest = INT_MIN;
            int lowest = INT_MAX;

            for (int j = i; j < i + k; j++) {
                if (nums[j] > highest) {
                    highest = nums[j];
                }
                if (nums[j] < lowest) {
                    lowest = nums[j];
                }
            }

            if (highest - lowest < diff) {
                diff = highest - lowest;
            }
        }

        return diff;
    }
};
