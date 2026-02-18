class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string ans;
        string word;
        while(ss >> word) {
            reverse(word.begin(), word.end());
            ans += word + " ";  // add the word and a space
        }
        if (!ans.empty()) ans.pop_back(); // remove the last extra space
        return ans;
    }
};
