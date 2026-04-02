class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> words;
        string temp = "";

        // Split string
        for(char c : s){
            if(c == ' '){
                words.push_back(temp);
                temp = "";
            } else {
                temp += c;
            }
        }
        words.push_back(temp);

        // Length mismatch
        if(words.size() != pattern.length()) return false;

        int n = pattern.length();

        // Brute force: check all pairs
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                
                // Same pattern char → words must be same
                if(pattern[i] == pattern[j]){
                    if(words[i] != words[j]) return false;
                }
                
                // Different pattern char → words must be different
                else{
                    if(words[i] == words[j]) return false;
                }
            }
        }

        return true;
    }
};