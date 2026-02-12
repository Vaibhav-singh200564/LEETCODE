#include <set>
class Solution {
public:
    int numberOfSpecialChars(string word) {
        set<char> lower, upper;

        for (char c : word) {
            if (islower(c)) lower.insert(c);
            else upper.insert(c);
        }

        int count = 0;
        for (char c : lower) {
            if (upper.count(toupper(c))) count++; // check if uppercase exists
        }

        return count;
    }
};
