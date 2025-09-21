class Solution {
public:
    string largestMerge(string word1, string word2) {
        string result;
        int i = 0, j = 0;
        int n = word1.size(), m = word2.size();

        while (i < n && j < m) {
            // Compare substrings starting at i and j
            if (word1.substr(i) > word2.substr(j)) {
                result.push_back(word1[i]);
                i++;
            } else {
                result.push_back(word2[j]);
                j++;
            }
        }

        // Append remaining characters
        if (i < n) result += word1.substr(i);
        if (j < m) result += word2.substr(j);

        return result;
    }
};
