class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int maxProduct = nums[0];   // ← FIX HERE

        for (int i = 0; i < n; i++) {
            int product = 1;
            for (int j = i; j < n; j++) {
                product *= nums[j];
                if (maxProduct < product) {
                    maxProduct = product;
                }
            }
        }

        return maxProduct;
    }
};
