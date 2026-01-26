class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        int maxSum=0;
        int prevSum=0;
        for(int i=0; i<k; i++){
            prevSum+=nums[i];
        }
        maxSum=prevSum;
        int i=1;
        int j=k;
        while(j<n){
            int currSum=prevSum+nums[j]-nums[i-1];
            if(maxSum<currSum){
                maxSum=currSum;
            }
            prevSum=currSum;
            i++;
            j++;
        }
        return (double)maxSum/k;
        
    }
};