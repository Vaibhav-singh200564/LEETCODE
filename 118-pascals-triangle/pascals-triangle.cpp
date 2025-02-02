class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> v;

        for (int i = 0; i < numRows; i++) {
            // Initialize each row with size i + 1
            vector<int> a(i + 1, 1);  // All elements initialized to 1
            
            // Fill the inner elements of the row (if applicable)
            for (int j = 1; j < i; j++) {
                a[j] = v[i - 1][j - 1] + v[i - 1][j];
            }

            v.push_back(a);  // Add the row to the result
        }

        return v;
    }
};
