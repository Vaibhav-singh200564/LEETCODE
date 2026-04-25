class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
        unordered_set<string> st(dictionary.begin(), dictionary.end());
        
        stringstream ss(sentence);
        string word;
        string result = "";
        
        while (ss >> word) {
            string prefix = "";
            string replacement = word;
            
            for (char c : word) {
                prefix += c;
                
                if (st.find(prefix) != st.end()) {
                    replacement = prefix;
                    break;
                }
            }
            
            result += replacement + " ";
        }
        
        // remove last space
        result.pop_back();
        return result;
    }
};