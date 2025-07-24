class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int, int> freq;
        for (int x : nums) {
            freq[x]++;
        }

        int sum = 0;
        for (auto [key, count] : freq) {
            if (count == 1) {
                sum += key;
            }
        }

        return sum;
    }
};
