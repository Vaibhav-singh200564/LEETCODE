class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int n = prices.size();
        int min1 = INT_MAX, min2 = INT_MAX;

        for(int i = 0; i < n; i++) {
            if(prices[i] < min1) {
                min2 = min1;
                min1 = prices[i];
            } else if(prices[i] < min2) {
                min2 = prices[i];
            }
        }

        int total = min1 + min2;

        if(total > money) {
            return money;
        }
        return money - total;
    }
};
