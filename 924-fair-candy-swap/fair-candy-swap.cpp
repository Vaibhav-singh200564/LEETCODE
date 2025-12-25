class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        int sumA = 0, sumB = 0;
        for (int x : aliceSizes) sumA += x;
        for (int y : bobSizes) sumB += y;
        
        int diff = (sumB - sumA) / 2;
        
        unordered_set<int> setB(bobSizes.begin(), bobSizes.end());
        
        for (int x : aliceSizes) {
            int y = x + diff;
            if (setB.count(y)) {
                return {x, y};
            }
        }
        
        return {}; // Should never reach here
    }
};
