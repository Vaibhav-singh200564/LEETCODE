#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        int n = nums.size();
        
        // Step 1: Sort the array
        sort(nums.begin(), nums.end());

        // Step 2: Iterate through the numbers
        for (int i = 0; i < n - 2; i++) {
            // Skip duplicate elements
            if (i > 0 && nums[i] == nums[i - 1]) continue;

            int left = i + 1, right = n - 1;
            int target = -nums[i];

            // Step 3: Use two-pointer technique
            while (left < right) {
                int sum = nums[left] + nums[right];

                if (sum == target) {
                    result.push_back({nums[i], nums[left], nums[right]});
                    
                    // Skip duplicate elements for `left` and `right`
                    while (left < right && nums[left] == nums[left + 1]) left++;
                    while (left < right && nums[right] == nums[right - 1]) right--;

                    // Move pointers
                    left++;
                    right--;
                } 
                else if (sum < target) {
                    left++; // Need a larger sum
                } 
                else {
                    right--; // Need a smaller sum
                }
            }
        }
        
        return result;
    }
};
