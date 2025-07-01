class Solution {
public:
    int possibleStringCount(string word) {  // Rename here
        vector<pair<char, int>> groups;
        int n = word.length();
        int i = 0;

        while (i < n) {
            char curr = word[i];
            int count = 0;
            while (i < n && word[i] == curr) {
                count++;
                i++;
            }
            groups.push_back({curr, count});
        }

        int total = 1;
        for (auto& g : groups) {
            if (g.second > 1) {
                total += (g.second - 1);
            }
        }

        return total;
    }
};
