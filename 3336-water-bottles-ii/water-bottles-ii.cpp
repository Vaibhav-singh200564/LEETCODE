class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int ans = numBottles;   // bottles drunk initially
        int empty = numBottles; // empty bottles after drinking

        while (empty >= numExchange) {
            empty -= numExchange;   // use bottles for exchange
            ans++;                  // drink 1 more bottle
            empty++;                // add the empty from the new bottle
            numExchange++;          // exchange rate increases
        }

        return ans;
    }
};
