class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int> even, odd;
        int n = nums.size();

        // Step 1: Separate even and odd indices
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) even.push_back(nums[i]);
            else odd.push_back(nums[i]);
        }

        // Step 2: Sort
        sort(even.begin(), even.end());        // ascending
        sort(odd.rbegin(), odd.rend());        // descending

        // Step 3: Place them back
        int e = 0, o = 0;
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) nums[i] = even[e++];
            else nums[i] = odd[o++];
        }

        return nums;
    }
};
