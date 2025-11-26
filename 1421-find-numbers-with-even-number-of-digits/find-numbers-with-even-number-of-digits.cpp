class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;

        for (int num : nums) {
            int digits = 0;
            
            // Count digits
            while (num > 0) {
                num /= 10;
                digits++;
            }

            // check even digits
            if (digits % 2 == 0) count++;
        }

        return count;
    }
};
