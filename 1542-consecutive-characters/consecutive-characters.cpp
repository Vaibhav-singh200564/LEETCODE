class Solution {
public:
    int maxPower(string s) {
        int count = 1;
        int maxCount = 1;

        for (int i = 0; i < s.size(); i++) {
            count = 1;   // reset for each new i
            for (int j = i + 1; j < s.size(); j++) {
                if (s[i] == s[j]) {
                    count++;
                    maxCount = max(maxCount, count);
                } else {
                    break;   // consecutive nahi hai
                }
            }
        }
        return maxCount;
    }
};
