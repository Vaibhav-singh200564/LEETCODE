class Solution {
public:
    bool allCapital(string word) {
        for (char &ch : word) {
            if (ch < 'A' || ch > 'Z')
                return false;
        }
        return true;
    }

    bool allSmall(string word) {
        for (char &ch : word) {
            if (ch < 'a' || ch > 'z') {
                return false;
            }
        }
        return true;  // Moved return statement outside loop
    }

    bool detectCapitalUse(string word) {
        if (allCapital(word) || allSmall(word) || allSmall(word.substr(1)))  // Fixed function call and substr syntax
            return true;
        
        return false;  // Moved return false inside function properly
    }
};
