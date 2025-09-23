class Solution {
public:
    vector<long long> getDistances(vector<int>& arr) {
        int n = arr.size();
        vector<long long> res(n, 0);
        unordered_map<int, vector<int>> mp;

        // Step 1: Group indices by value
        for (int i = 0; i < n; i++) {
            mp[arr[i]].push_back(i);
        }

        // Step 2: Process each group
        for (auto& [val, indices] : mp) {
            int m = indices.size();
            vector<long long> prefix(m, 0);
            prefix[0] = indices[0];

            // prefix sum of indices
            for (int i = 1; i < m; i++) {
                prefix[i] = prefix[i - 1] + indices[i];
            }

            // calculate distance for each index
            for (int i = 0; i < m; i++) {
                long long left = i == 0 ? 0 : (long long)i * indices[i] - prefix[i - 1];
                long long right = i == m - 1 ? 0 : (prefix[m - 1] - prefix[i]) - (long long)(m - i - 1) * indices[i];
                res[indices[i]] = left + right;
            }
        }

        return res;
    }
};
