class Solution {
public:
    vector<long long> distance(vector<int>& nums) {
        unordered_map<int, vector<int>> mp;
        
        // Step 1: store indices
        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]].push_back(i);
        }

        vector<long long> ans(nums.size(), 0);

        // Step 2: process each group
        for (auto &it : mp) {
            vector<int> &v = it.second;
            int n = v.size();

            vector<long long> prefix(n, 0);
            prefix[0] = v[0];

            for (int i = 1; i < n; i++) {
                prefix[i] = prefix[i-1] + v[i];
            }

            for (int i = 0; i < n; i++) {
                long long left = 0, right = 0;

                // left part
                if (i > 0) {
                    left = (long long)v[i] * i - prefix[i-1];
                }

                // right part
                if (i < n - 1) {
                    right = (prefix[n-1] - prefix[i]) - (long long)v[i] * (n - i - 1);
                }

                ans[v[i]] = left + right;
            }
        }

        return ans;
    }
};