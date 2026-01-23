class Solution {
public:
    bool isPalindrome(string s) {
        string s1 = "";
        for(char ch : s){
            if(isalnum(ch)){
                s1 += tolower(ch);
            }
        }
        string rev = s1;
        reverse(rev.begin(), rev.end());
        return rev == s1;   // ✅ compare the processed strings
    }
};
