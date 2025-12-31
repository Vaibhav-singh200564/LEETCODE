class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int curr=1;
        int maxL=1;
        for(int i=1; i<nums.size(); i++){
            if(nums[i]>nums[i-1]){
                curr++;
            }else{
                curr=1;
            }
            maxL=max(maxL,curr);
        }
        return maxL;
        
    }
};