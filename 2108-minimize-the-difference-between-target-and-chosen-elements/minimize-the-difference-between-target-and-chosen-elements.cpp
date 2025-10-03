class Solution {
public:
    int minimizeTheDifference(vector<vector<int>>& mat, int target) {
        unordered_set<int> sums;
        sums.insert(0);  // start with sum = 0

        for (auto &row : mat) {
            unordered_set<int> newSums;
            for (int prev : sums) {
                for (int val : row) {
                    newSums.insert(prev + val);
                }
            }

            // To avoid memory explosion, prune values
            // Only keep sums within reasonable range
            // (target + 70*70 = max 4900 since mat[i][j] <= 70, m <= 70)
            unordered_set<int> pruned;
            for (int s : newSums) {
                if (s <= target + 70*70) {
                    pruned.insert(s);
                }
            }
            sums = move(pruned);
        }

        // Find minimal difference
        int ans = INT_MAX;
        for (int s : sums) {
            ans = min(ans, abs(s - target));
        }
        return ans;
    }
};
