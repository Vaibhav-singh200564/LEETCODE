class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s1(nums1.begin(),nums1.end());
        vector<int> ans;
        for(int i=0; i<nums2.size(); i++){
            if(s1.find(nums2[i])!=s1.end()){
                ans.push_back(nums2[i]);
                s1.erase(nums2[i]);
            }
        }
        return ans;
    }
};
