class Solution {
public:
    int minSessions(vector<int>& tasks, int sessionTime) {
        int n = tasks.size();
        int m = 1 << n;
        vector<int> dp(m, 1e9);
        vector<int> sum(m, 0);
        for (int mask = 0; mask < m; mask++) {
            int s = 0;
            for (int i = 0; i < n; i++) {
                if (mask & (1 << i)) s += tasks[i];
            }
            sum[mask] = s;
        }
        dp[0] = 0;
        for (int mask = 1; mask < m; mask++) {
            for (int sub = mask; sub; sub = (sub - 1) & mask) {
                if (sum[sub] <= sessionTime)
                    dp[mask] = min(dp[mask], dp[mask ^ sub] + 1);
            }
        }
        return dp[m - 1];
    }
};
