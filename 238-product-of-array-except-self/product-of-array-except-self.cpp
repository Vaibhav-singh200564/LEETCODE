class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> pref(n);
        vector<int> suf(n);

        int p = nums[0];
        pref[0] = 1;

        // prefix product
        for(int i = 1; i < n; i++){
            pref[i] = p;
            p *= nums[i];
        }

        // suffix product
        p = nums[n - 1];
        suf[n - 1] = 1;

        for(int i = n - 2; i >= 0; i--){
            suf[i] = p;
            p *= nums[i];
        }

        for(int i = 0; i < n; i++){
            pref[i] = pref[i] * suf[i];
        }

        return pref;
    }
};
