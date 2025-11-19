class Solution {
public:
    int binaryGap(int n) {
        int prev = -1;
        int maxGap = 0;
        int index = 0;
        
        while (n > 0) {
            if (n & 1) {  // if current bit is 1
                if (prev != -1) {
                    maxGap = std::max(maxGap, index - prev);
                }
                prev = index;
            }
            n = n >> 1;  // move to next bit
            index++;
        }
        
        return maxGap;
    }
};
