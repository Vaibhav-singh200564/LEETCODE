class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        stack<int> st;

        // Push only elements not equal to val
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != val){
                st.push(nums[i]);
            }
        }

        // Restore elements to nums in correct order
        int k = st.size(); // number of valid elements
        for(int i = k - 1; i >= 0; i--){
            nums[i] = st.top();
            st.pop();
        }

        return k; // return new length
    }
};
