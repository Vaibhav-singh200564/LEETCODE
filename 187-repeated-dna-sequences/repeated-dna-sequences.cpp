class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        int n = s.size();
        vector<string> result;
        if (n <= 10) return result;

        unordered_map<string, int> freq;

        for (int i = 0; i <= n - 10; i++) {
            string sub = s.substr(i, 10);
            freq[sub]++;
            if (freq[sub] == 2) {
                result.push_back(sub);
            }
        }

        return result;
    }
};
