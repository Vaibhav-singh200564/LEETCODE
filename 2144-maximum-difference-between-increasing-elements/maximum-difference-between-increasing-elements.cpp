class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int n = nums.size();
        int maxDiff = 0;

        for(int i = 0; i < n; i++){
            int diff = 0;
            for(int j = i + 1; j < n; j++){
                diff = nums[j] - nums[i];
                if(maxDiff < diff){
                    maxDiff = diff;
                }
            }
        }

        return maxDiff == 0 ? -1 : maxDiff;
    }
};
