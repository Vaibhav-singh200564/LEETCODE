class Solution {
public:
    bool isPalindrome(string s) {
        string cleaned = "";
        for (char c : s) {
            if (isalnum(c)) cleaned += tolower(c);
        }
        string reversedStr = cleaned;
        reverse(reversedStr.begin(), reversedStr.end());
        return cleaned == reversedStr;
    }
};
