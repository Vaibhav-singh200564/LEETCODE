class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos, neg;

        // Separate positives and negatives
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0) pos.push_back(nums[i]);
            else neg.push_back(nums[i]);
        }

        vector<int> result;

        // Merge alternately using push_back
        for (int i = 0; i < pos.size(); i++) {
            result.push_back(pos[i]); // add positive
            result.push_back(neg[i]); // add negative
        }

        return result;
    }
};
