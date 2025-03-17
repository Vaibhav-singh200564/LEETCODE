class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<bool> check(n + 1, false);  // Corrected: Use `bool` values properly
        vector<int> v;
        
        for (int i = 0; i < n; i++) {
            int ele = nums[i];
            check[ele] = true;
        }

        for (int i = 1; i <= n; i++) {  // Corrected: Iterate from 1 to n
            if (check[i] == false) v.push_back(i);
        }

        return v;
    }
};
