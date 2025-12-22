class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_set<int> seen;
        vector<int> ans;
        for(auto x:nums){
            if(seen.find(x)!=seen.end()){
                ans.push_back(x);
            }else{
                seen.insert(x);
            }
        }
        return ans;
        
    }
};