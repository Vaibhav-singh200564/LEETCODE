class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        unordered_map<int, int> mp;
        vector<int> ans;
        
        int n = nums.size();

        // Count frequency of each number
        for (auto &vec : nums) {
            for (int num : vec) {
                mp[num]++;
            }
        }

        // If frequency == number of arrays,
        // then it is present in all arrays
        for (auto &it : mp) {
            if (it.second == n) {
                ans.push_back(it.first);
            }
        }

        // Result should be sorted
        sort(ans.begin(), ans.end());

        return ans;
    }
};