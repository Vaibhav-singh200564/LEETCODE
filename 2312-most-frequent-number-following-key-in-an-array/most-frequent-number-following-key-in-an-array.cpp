class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        unordered_map<int, int> freq;

        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] == key) {
                freq[nums[i + 1]]++;
            }
        }

        int ans = -1, maxFreq = 0;
        for (auto &it : freq) {
            if (it.second > maxFreq) {
                maxFreq = it.second;
                ans = it.first;
            }
        }

        return ans;
    }
};
