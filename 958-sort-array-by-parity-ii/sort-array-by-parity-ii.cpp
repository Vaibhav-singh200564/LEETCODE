class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n = nums.size();
        vector<int> even;
        vector<int> odd;

        for(int i = 0; i < n; i++){
            if(nums[i] % 2 == 0){
                even.push_back(nums[i]);
            } else {
                odd.push_back(nums[i]);
            }
        }

        vector<int> ans;
        for(int i = 0; i < even.size(); i++){
            ans.push_back(even[i]); // even index
            ans.push_back(odd[i]);  // odd index
        }

        return ans;
    }
};
