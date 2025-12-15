

class Solution {
public:
    int minimumCost(vector<int>& cost) {
        // Sort the costs in descending order
        sort(cost.rbegin(), cost.rend());
        
        int total = 0;
        for (int i = 0; i < cost.size(); i++) {
            // Every third candy (i % 3 == 2) is free
            if (i % 3 != 2) {
                total += cost[i];
            }
        }
        return total;
    }
};
