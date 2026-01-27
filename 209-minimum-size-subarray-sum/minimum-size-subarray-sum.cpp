class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        int minLen = n + 1;

        int i = 0;                 // start pointer

        for (int j = 0; j < n; j++) {   // end pointer
            sum += nums[j];

            while (sum >= target) {
                int len = j - i + 1;
                if (len < minLen) {
                    minLen = len;
                }
                sum -= nums[i];
                i++;
            }
        }

        return (minLen == n + 1) ? 0 : minLen;
    }
};
