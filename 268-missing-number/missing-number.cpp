class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_set<int> s;
        for (int num : nums) {
            s.insert(num);
        }

        int n = nums.size();
        for (int i = 0; i <= n; i++) {
            if (s.count(i) == 0) {
                return i;
            }
        }

        return -1; 
    }
};