class Solution {
public:
    bool reorderedPowerOf2(int n) {
        string s = sortedDigits(n);
        
        for (int i = 0; i < 31; i++) { // 2^0 to 2^30 covers int range
            int pow2 = 1 << i;
            if (sortedDigits(pow2) == s) 
                return true;
        }
        return false;
    }
    
    string sortedDigits(int num) {
        string s = to_string(num);
        sort(s.begin(), s.end());
        return s;
    }
};
