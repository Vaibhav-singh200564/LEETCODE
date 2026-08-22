class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> map1;
        unordered_map<int,int> map2;

        for(int x:nums1){
            map1[x]++;
        }
        for(int x:nums2){
            map2[x]++;
        }
        int answer1=0;
        int answer2=0;
        for(auto x:nums1){
            if(map2.find(x)!=map2.end()){
                answer1++;
            }
        }
        for(auto y:nums2){
            if(map1.find(y)!=map1.end()){
                answer2++;
            }
        }
        return {answer1,answer2};
    }
};