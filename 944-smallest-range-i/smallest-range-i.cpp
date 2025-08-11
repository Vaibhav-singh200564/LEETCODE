class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int maxVal = *max_element(nums.begin(), nums.end());
        int minVal = *min_element(nums.begin(), nums.end());
        
        int diff = maxVal - minVal;
        
        // Reduce the range by 2*k, but not below zero
        return max(0, diff - 2 * k);
    }
};
