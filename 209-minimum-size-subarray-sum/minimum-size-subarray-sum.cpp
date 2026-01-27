class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        int left = 0;
        int minLen = n + 1;

        for(int right = 0; right < n; right++) {
            sum += nums[right];

            while(sum >= target) {
                int len = right - left + 1;
                if(len < minLen) {
                    minLen = len;
                }
                sum -= nums[left];
                left++;
            }
        }

        return (minLen == n + 1) ? 0 : minLen;
    }
};
