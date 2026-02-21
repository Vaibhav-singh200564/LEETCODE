class Solution {
public:
    void duplicateZeros(vector<int>& arr) {

        vector<int> ans;
        int n = arr.size();

        for (int i = 0; i < n; i++) {

            // Normal element
            if (arr[i] != 0) {
                ans.push_back(arr[i]);
            }
            else {
                // Zero → duplicate
                ans.push_back(0);

                if (ans.size() < n)
                    ans.push_back(0);
            }

            // Stop if full
            if (ans.size() >= n)
                break;
        }

        arr = ans;
    }
};