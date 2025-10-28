class Solution {
public:
    int largestRectangleArea(vector<int>& arr) {
        int n = arr.size();
        int nsi[n];
        stack<int> st;

        // Next Smaller Index (NSI)
        nsi[n - 1] = n;
        st.push(n - 1);
        for (int i = n - 2; i >= 0; i--) {
            while (!st.empty() && arr[st.top()] >= arr[i]) {
                st.pop();
            }
            nsi[i] = st.empty() ? n : st.top();
            st.push(i);
        }

        // Previous Smaller Index (PSI)
        int psi[n];
        stack<int> gt;
        psi[0] = -1;
        gt.push(0);
        for (int i = 1; i < n; i++) {
            while (!gt.empty() && arr[gt.top()] >= arr[i]) {
                gt.pop();
            }
            psi[i] = gt.empty() ? -1 : gt.top();
            gt.push(i);
        }

        // Calculate max area
        int maxArea = 0;
        for (int i = 0; i < n; i++) {
            int height = arr[i];
            int breadth = nsi[i] - psi[i] - 1;
            int area = height * breadth;
            maxArea = max(maxArea, area);
        }

        return maxArea;
    }
};
