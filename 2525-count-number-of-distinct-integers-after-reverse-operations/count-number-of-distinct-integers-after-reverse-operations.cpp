
class Solution{
    public:
    int countDistinctIntegers(vector<int>& nums){ // <-- name fixed
        int n = nums.size();
        unordered_set<int> s;
        for(int i = 0; i < n; i++){
            string rev = to_string(nums[i]);
            reverse(rev.begin(), rev.end());
            int reversedNum = stoi(rev);
            s.insert(nums[i]);
            s.insert(reversedNum);
        }
        return s.size();
    }
};