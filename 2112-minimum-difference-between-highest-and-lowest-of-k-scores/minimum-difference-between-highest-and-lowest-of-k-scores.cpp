
class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        if (k == 1) return 0;  
        
        sort(nums.begin(), nums.end()); // Sort the array
        
        int n = nums.size();
        int minDiff = INT_MAX;
        
        // Slide a window of size k
        for (int i = 0; i <= n - k; i++) {
            int diff = nums[i + k - 1] - nums[i]; 
            minDiff = min(minDiff, diff);
        }
        
        return minDiff;
    }
};
