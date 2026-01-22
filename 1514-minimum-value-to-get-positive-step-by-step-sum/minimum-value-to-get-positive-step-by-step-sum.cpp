class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int startValue = 1;

        while (true) {
            int sum = startValue;
            bool valid = true;

            for (int i = 0; i < nums.size(); i++) {
                sum += nums[i];
                if (sum < 1) {
                    valid = false;
                    break;
                }
            }

            if (valid)
                return startValue;

            startValue++;
        }
    }
};
