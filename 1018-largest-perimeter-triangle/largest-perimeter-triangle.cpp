#include <vector>
#include <algorithm>

class Solution {
public:
    int largestPerimeter(std::vector<int>& nums) {
        std::sort(nums.begin(), nums.end()); // Sort in ascending order
        for (int i = nums.size() - 3; i >= 0; i--) {
            if (nums[i] + nums[i + 1] > nums[i + 2]) {
                return nums[i] + nums[i + 1] + nums[i + 2]; // Return the perimeter
            }
        }
        return 0; // No valid triangle found
    }
};
