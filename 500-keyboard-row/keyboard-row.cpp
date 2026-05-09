class Solution {
public:
    vector<string> findWords(vector<string>& words) {

        unordered_map<char, int> mp;

        string row1 = "qwertyuiop";
        string row2 = "asdfghjkl";
        string row3 = "zxcvbnm";

        for(char ch : row1)
            mp[ch] = 1;

        for(char ch : row2)
            mp[ch] = 2;

        for(char ch : row3)
            mp[ch] = 3;

        vector<string> ans;

        for(string word : words) {

            int row = mp[tolower(word[0])];

            bool valid = true;

            for(char ch : word) {

                if(mp[tolower(ch)] != row) {
                    valid = false;
                    break;
                }
            }

            if(valid)
                ans.push_back(word);
        }

        return ans;
    }
};