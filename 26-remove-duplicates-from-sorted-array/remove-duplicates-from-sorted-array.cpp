class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0; // Edge case

        int i = 0; // Pointer for unique elements

        for (int j = 1; j < nums.size(); j++) {
            if (nums[j] != nums[i]) {
                i++; // Move pointer for unique elements
                nums[i] = nums[j]; // Overwrite the next unique position
            }
        }

        return i + 1; // Length of unique elements
    }
};
