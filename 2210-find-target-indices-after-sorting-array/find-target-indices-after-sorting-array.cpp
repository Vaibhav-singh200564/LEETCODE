

class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> ans;
        sort(nums.begin(), nums.end()); // Step 1: sort the array
        
        for(int i = 0; i < nums.size(); i++) { // Step 2: check each element
            if(nums[i] == target) {
                ans.push_back(i); // Step 3: store index
            }
        }
        
        return ans; // Step 4: return result
    }
};
