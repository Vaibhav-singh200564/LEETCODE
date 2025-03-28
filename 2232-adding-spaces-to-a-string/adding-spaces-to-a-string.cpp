class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        int m = s.size();
        int n = spaces.size();
        string result = "";
        int j = 0;
        
        for (int i = 0; i < m; i++) {
            if (j < n && i == spaces[j]) {
                result += " ";  // Append space instead of replacing the string
                j++;  // Move to the next space position
            }
            result += s[i];
        }
        
        return result;
    }
};
