

class Solution {
public:
    vector<bool> canEat(vector<int>& candiesCount, vector<vector<int>>& queries) {
        int n = candiesCount.size();
        vector<long long> prefix(n, 0);
        prefix[0] = candiesCount[0];
        for (int i = 1; i < n; i++) {
            prefix[i] = prefix[i - 1] + candiesCount[i];
        }
        
        vector<bool> ans;
        for (auto& q : queries) {
            int type = q[0];
            long long day = q[1];
            long long cap = q[2];
            
            // Range of candies for this type
            long long start = (type == 0 ? 1 : prefix[type - 1] + 1);
            long long end = prefix[type];
            
            // Range of candies you can eat by day
            long long minEaten = day + 1;
            long long maxEaten = (day + 1) * cap;
            
            // Check overlap
            bool possible = !(maxEaten < start || minEaten > end);
            ans.push_back(possible);
        }
        return ans;
    }
};
