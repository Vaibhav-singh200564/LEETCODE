class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int, int> mp;
        mp[0] = -1;  // base case
        
        int sum = 0;
        int maxi = 0;
        
        for(int i = 0; i < nums.size(); i++) {
            
            // convert 0 → -1, 1 → +1
            if(nums[i] == 0) sum -= 1;
            else sum += 1;
            
            // if same sum seen before
            if(mp.find(sum) != mp.end()) {
                maxi = max(maxi, i - mp[sum]);
            } else {
                mp[sum] = i; // store first occurrence
            }
        }
        
        return maxi;
    }
};