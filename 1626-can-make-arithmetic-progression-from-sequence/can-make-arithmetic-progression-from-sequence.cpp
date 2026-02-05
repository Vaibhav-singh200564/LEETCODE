class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int diff=nums[1]-nums[0];
        for(int i=2; i<n; i++){
            if(nums[i]-nums[i-1]!=diff){
                return false;
            }
        }
        return true;
    }
};