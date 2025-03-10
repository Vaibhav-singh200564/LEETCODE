class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> result(nums.size()); // Create a vector to store the running sums
        int store = 0; // To accumulate the running sum
        
        for (int i = 0; i < nums.size(); i++) {
            store += nums[i]; // Update the running sum
            result[i] = store; // Store the running sum in the result vector
        }
        
        return result; // Return the result vector with the running sums
    }
};
