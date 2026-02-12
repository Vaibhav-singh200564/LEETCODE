class Solution {
public:
    bool detectCapitalUse(string word) {
        string lower = word;
        string upper = word;

        // convert whole word to lowercase and uppercase
        for (auto &c : lower) c = tolower(c);
        for (auto &c : upper) c = toupper(c);

        // case 1: all lowercase, case 2: all uppercase
        if (word == lower || word == upper) return true;

        // case 3: only first letter uppercase
        if (isupper(word[0]) && word.substr(1) == lower.substr(1)) return true;

        return false;
    }
};
