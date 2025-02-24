class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string word;
        vector<string> words;

        // Extract words from the string
        while (ss >> word) {
            words.push_back(word);
        }

        // Reverse the words and join them into a single string
        reverse(words.begin(), words.end());

        // Join words with a single space
        string result = "";
        for (int i = 0; i < words.size(); i++) {
            if (i > 0) result += " ";
            result += words[i];
        }

        return result;
    }
};
