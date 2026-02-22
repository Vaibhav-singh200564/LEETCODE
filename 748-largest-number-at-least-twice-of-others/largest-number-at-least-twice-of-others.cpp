class Solution {
public:
    int dominantIndex(vector<int>& nums) {

        vector<int> sorted = nums;   // copy array
        sort(sorted.begin(), sorted.end());

        int largest = sorted.back();
        int secondLargest = sorted[sorted.size() - 2];

        if (largest < 2 * secondLargest)
            return -1;

        // find index of largest in original array
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == largest)
                return i;
        }

        return -1;
    }
};