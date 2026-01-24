class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;

        vector<int> v(n);   // ❌ vector<int> v(); → creates a function
                            // ✅ we need a vector of size n

        for (int i = 0; i < n; i++) {
            v[(i + k) % n] = nums[i];
        }

        for (int i = 0; i < n; i++) {
            nums[i] = v[i];   
        }
    }
};
