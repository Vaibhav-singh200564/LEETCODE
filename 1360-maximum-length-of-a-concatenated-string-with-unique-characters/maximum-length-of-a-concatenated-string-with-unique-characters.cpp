class Solution {
public:
    int maxLength(vector<string>& arr) {
        vector<int> masks; // bitmasks of valid strings
        for (string &s : arr) {
            int mask = 0;
            bool valid = true;
            for (char c : s) {
                int bit = c - 'a';
                if (mask & (1 << bit)) { // duplicate character in same string
                    valid = false;
                    break;
                }
                mask |= (1 << bit);
            }
            if (valid) masks.push_back(mask);
        }

        return dfs(masks, 0, 0);
    }

    int dfs(vector<int>& masks, int idx, int used) {
        if (idx == masks.size()) return __builtin_popcount(used); // count bits = length

        int notTake = dfs(masks, idx + 1, used);
        int take = 0;
        if ((used & masks[idx]) == 0) { // no overlap
            take = dfs(masks, idx + 1, used | masks[idx]);
        }

        return max(take, notTake);
    }
};
