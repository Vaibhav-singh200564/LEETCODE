class Solution {
public:
    string kthLargestNumber(vector<string>& nums, int k) {
        sort(nums.begin(), nums.end(), [](string &a, string &b) {
            if (a.size() != b.size())
                return a.size() > b.size();  // longer number is larger
            return a > b;                    // same length → lexicographical
        });
        return nums[k - 1];
    }
};
