class Solution {
public:
    int minimumFinishTime(vector<vector<int>>& tires, int changeTime, int numLaps) {
        const int INF = 1e9;
        vector<int> best(19, INF); // store best time for 1 to 18 laps without changing tire
        
        for (auto &t : tires) {
            long long f = t[0], r = t[1];
            long long time = f, total = f;
            best[1] = min(best[1], (int)f);
            for (int i = 2; i < 19; ++i) {
                f *= r;
                if (f > 1e7) break; // prevent overflow
                total += f;
                if (total >= INF) break;
                best[i] = min(best[i], (int)total);
            }
        }
        
        vector<int> dp(numLaps + 1, INF);
        dp[0] = 0;
        for (int i = 1; i <= numLaps; ++i) {
            for (int j = 1; j < 19 && j <= i; ++j) {
                dp[i] = min(dp[i], dp[i - j] + best[j] + changeTime);
            }
        }
        return dp[numLaps] - changeTime; // no change after last lap
    }
};
