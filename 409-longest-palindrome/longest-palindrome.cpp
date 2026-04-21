class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> mp;
        int length = 0;

        for(char c : s) {
            mp[c]++;
        }

        for(auto it : mp) {
            length += (it.second / 2) * 2;
        }

        if(length < s.size()) {
            length += 1;
        }

        return length;
    }
};