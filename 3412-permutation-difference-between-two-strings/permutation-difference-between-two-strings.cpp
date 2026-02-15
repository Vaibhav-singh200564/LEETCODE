class Solution {
public:
    int findPermutationDifference(string s, string t) {
        vector<int> pos(26);

        // Store positions of characters from string s
        for (int i = 0; i < s.length(); i++) {
            pos[s[i] - 'a'] = i;
        }

        int diff = 0;

        // Compute permutation difference
        for (int i = 0; i < t.length(); i++) {
            diff += abs(i - pos[t[i] - 'a']);
        }

        return diff;
    }
};
