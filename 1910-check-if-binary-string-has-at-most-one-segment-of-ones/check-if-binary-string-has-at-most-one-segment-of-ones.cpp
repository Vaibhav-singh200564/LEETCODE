class Solution {
public:
    bool checkOnesSegment(string s) {
        bool foundZeroAfterOne = false;
        
        for (char c : s) {
            if (c == '1') {
                // If we already saw a 0 after 1, another 1 means false
                if (foundZeroAfterOne) return false;
            } else {
                // c == '0', mark that we saw 0 after 1
                foundZeroAfterOne = true;
            }
        }
        
        return true;
    }
};
