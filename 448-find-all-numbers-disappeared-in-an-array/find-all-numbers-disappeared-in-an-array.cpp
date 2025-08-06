class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());
        vector<int> result;

        for (int i = 1; i <= nums.size(); i++) {
            if (s.count(i) == 0) {
                result.push_back(i);
            }
        }

        return result;
    }
};
