class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(auto x:nums){
            freq[x]++;
        }
        set<int> s;
        int maxi=0;
        for(auto x:freq){
            maxi=max(maxi,x.second);
        }
        int ans=0;
        for(auto x:freq){
            if(maxi==x.second){
                ans=ans+x.second;
            }
        }
        return ans;
    }
};