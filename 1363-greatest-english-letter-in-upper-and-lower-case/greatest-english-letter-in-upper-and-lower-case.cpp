class Solution {
public:
    string greatestLetter(string s) {

        set<char> lower, upper;

        // Step 1: Fill sets
        for(char c : s) {
            if(islower(c))
                lower.insert(c);
            else
                upper.insert(c);
        }

        string ans = "";

        // Step 2: Find special letters
        for(char c : lower) {
            if(upper.count(toupper(c))) {
                ans.push_back(toupper(c));
            }
        }

        // Step 3: Return greatest
        if(ans.empty()) return "";

        sort(ans.begin(), ans.end());

        return string(1, ans.back());
    }
};
