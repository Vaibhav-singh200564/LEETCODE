class Solution {
public:
    void duplicateZeros(vector<int>& arr) {

        int n = arr.size();

        // Answer vector of same size
        vector<int> ans(n);

        int k = 0;  // write pointer

        for (int i = 0; i < n && k < n; i++) {

            // If zero → duplicate
            if (arr[i] == 0) {

                ans[k++] = 0;

                // Insert second zero only if space exists
                if (k < n)
                    ans[k++] = 0;
            }
            else {
                // Normal element
                ans[k++] = arr[i];
            }
        }

        // Copy back to original array
        arr = ans;
    }
};