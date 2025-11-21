class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& arr, int k) {
        int n = arr.size();
        vector<int> ngi(n);
        stack<int> st;

        ngi[n-1] = n;
        st.push(n-1);

        for(int i = n-2; i >= 0; i--) {   // FIX: loop was wrong (i > 0 should be i >=0)
            while(st.size() > 0 && arr[st.top()] <= arr[i]) {
                st.pop();
            }

            if(st.size() == 0) 
                ngi[i] = n;
            else 
                ngi[i] = st.top();   // FIX: you wrote ng[i], corrected to ngi[i]

            st.push(i);              // FIX: missing semicolon
        }

        vector<int> ans;

        for(int i = 0; i <= n - k; i++) {  // FIX: condition changed to <= n-k
            int maxVal = arr[i];          // FIX: variable name cannot be max
            int j = i;                    // FIX: you forgot int

            while(ngi[j] < i + k) {       // FIX: should check ngi[j], not ngi[i]
                maxVal = arr[ngi[j]];
                j = ngi[j];
            }

            ans.push_back(maxVal);
        }

        return ans;  // FIX: missing return
    }
};
