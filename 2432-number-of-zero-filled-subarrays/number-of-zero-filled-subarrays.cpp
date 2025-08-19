class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long count = 0, consecutive = 0;
        for (int x : nums) {
            if (x == 0) {
                consecutive++;
                count += consecutive; 
            } else {
                consecutive = 0; 
            }
        }
        return count;
    }
};
