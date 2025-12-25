class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> s(nums.begin(), nums.end());  // remove duplicates automatically
        nums.assign(s.begin(), s.end());       // overwrite nums with unique elements
        return nums.size();                     // return number of unique elements
    }
};