class Solution {
public:
    int maxFreq(string s, int maxLetters, int minSize, int maxSize) {
        unordered_map<string, int> freq;
        unordered_map<char, int> count;
        int i = 0, j = 0, ans = 0;

        while (j < s.size()) {
            count[s[j]]++;
            if (j - i + 1 > minSize) {
                count[s[i]]--;
                if (count[s[i]] == 0) count.erase(s[i]);
                i++;
            }
            if (j - i + 1 == minSize && count.size() <= maxLetters) {
                string sub = s.substr(i, minSize);
                ans = max(ans, ++freq[sub]);
            }
            j++;
        }
        return ans;
    }
};
