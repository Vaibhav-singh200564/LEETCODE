class Solution {
public:
    int minimumFlips(int n) {
        string s = "";
        
        // Convert n to binary string
        while (n > 0) {
            s.push_back((n % 2) + '0');
            n /= 2;
        }
        
        // s is currently reversed binary, so reverse it
        reverse(s.begin(), s.end());
        
        // Create reversed version
        string rev = s;
        reverse(rev.begin(), rev.end());
        
        int flips = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] != rev[i])
                flips++;
        }
        
        return flips;
    }
};
