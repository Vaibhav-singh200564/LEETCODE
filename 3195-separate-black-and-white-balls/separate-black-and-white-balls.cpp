class Solution {
public:
    long long minimumSteps(string s) {
        // int n = s.length();
        long long steps = 0;
        int count1 = 0;  // Counting 'x' characters
        
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '1') {
                count1++;  // Add count of previous 'x' chars
            } else { 
                steps+=count1;  // Count 'x' encountered so far
            }
        }
        return steps;
    }
};
