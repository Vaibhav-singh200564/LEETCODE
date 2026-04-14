class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        mp[0] = -1;  // important for subarrays starting from index 0
        
        int sum = 0;
        
        for(int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            
            int rem = sum % k;
            
            if(mp.find(rem) != mp.end()) {
                if(i - mp[rem] >= 2) {
                    return true;
                }
            } else {
                mp[rem] = i; // store first occurrence only
            }
        }
        
        return false;
    }
};