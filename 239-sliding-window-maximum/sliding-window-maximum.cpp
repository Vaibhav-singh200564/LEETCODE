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
                ngi[i] = st.top();   
            st.push(i);              
        }

        vector<int> ans;
        int j=0;
        for(int i = 0; i <= n - k; i++) {  
            if(j<i) j=i;
            int maxVal = arr[j];                         
            while(j < i + k) {       
                maxVal = arr[j];
                if(ngi[j]>=i+k) break;
                j = ngi[j];
            }

            ans.push_back(maxVal);
        }

        return ans;  
    }
};
