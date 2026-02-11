class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(int x:nums){
            if(x%2==0){
                freq[x]++;
            }
        }
        int maxCount=0;
        int ans=-1;
        for(auto it:freq){
            int num=it.first;
            int count=it.second;
            if(count>maxCount || (count==maxCount && num<ans)){
                maxCount=count;
                ans=num;
            }
        }
        return ans;
    }
};