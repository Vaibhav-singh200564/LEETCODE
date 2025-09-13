class Solution {
public:
    int maxVowels(string s, int k) {
        string vowels = "aeiou";
        int n = s.size();
        int count = 0, ans = 0;

        for (int i = 0; i < n; i++) {
            if (vowels.find(s[i]) != string::npos) count++; // add new char
            if (i >= k && vowels.find(s[i - k]) != string::npos) count--; // remove old char
            ans = max(ans, count);
        }
        return ans;
    }
};
