class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty()) return 0;

        stack<int> st;
        for(int i = 0; i < nums.size(); i++) {
            if(st.empty() || st.top() != nums[i]) {
                st.push(nums[i]); 
            }
        }

    
        int n = st.size();
        for(int i = n - 1; i >= 0; i--) {
            nums[i] = st.top();
            st.pop();
        }

        return n;
    }
};
