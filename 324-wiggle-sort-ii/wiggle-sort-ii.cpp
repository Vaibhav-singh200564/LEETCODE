class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int n = nums.size();
        int mid = (n + 1) / 2;

        vector<int> left(nums.begin(), nums.begin() + mid);
        vector<int> right(nums.begin() + mid, nums.end());

        reverse(left.begin(), left.end());
        reverse(right.begin(), right.end());

        int l = 0, r = 0;

        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                nums[i] = left[l++];   // FIXED
            } else {
                nums[i] = right[r++];  // FIXED
            }
        }
    }
};