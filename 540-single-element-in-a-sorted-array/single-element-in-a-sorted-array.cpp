class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        unordered_map<int, int> freq;

        // Count frequency
        for (int x : nums) {
            freq[x]++;
        }

        // Find element with frequency 1
        for (auto &p : freq) {
            if (p.second == 1) {
                return p.first;
            }
        }

        return -1; // Safety (though problem guarantees one exists)
    }
};