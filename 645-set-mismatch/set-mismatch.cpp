class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
        int sum_num=0;
        for(int i=0; i<n; i++){
                sum_num=sum_num+nums[i];
        }
        set<int> s(nums.begin(),nums.end());
        int sum_unique=0;
        for(int x:s){
        sum_unique=sum_unique+x;
       }
       int totalSum=n*(n+1)/2;
       int duplicate=sum_num-sum_unique;
       int missingVal=totalSum-sum_unique;
       return {duplicate,missingVal};
    }
    
};