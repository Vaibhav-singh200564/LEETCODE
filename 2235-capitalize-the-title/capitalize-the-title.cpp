class Solution {
public:
    string capitalizeTitle(string title) {
        int n = title.size();
        string word = "", result = "";
        
        for (int i = 0; i <= n; i++) {
            if (i < n && title[i] != ' ') {
                word += title[i];
            } else {
                if (word.length() <= 2) {
                    for (char &ch : word) ch = tolower(ch);
                } else {
                    word[0] = toupper(word[0]);
                    for (int j = 1; j < word.length(); j++)
                        word[j] = tolower(word[j]);
                }
                result += word;
                if (i < n) result += " ";
                word = "";
            }
        }
        
        return result;
    }
};
