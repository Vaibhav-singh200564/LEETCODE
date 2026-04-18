class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        
        bool firstRow = false, firstCol = false;

        // Step 1: Check if first row has zero
        for(int j = 0; j < m; j++) {
            if(matrix[0][j] == 0) {
                firstRow = true;
                break;
            }
        }

        // Step 2: Check if first column has zero
        for(int i = 0; i < n; i++) {
            if(matrix[i][0] == 0) {
                firstCol = true;
                break;
            }
        }

        // Step 3: Use first row & column as markers
        for(int i = 1; i < n; i++) {
            for(int j = 1; j < m; j++) {
                if(matrix[i][j] == 0) {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }

        // Step 4: Set elements to zero based on markers
        for(int i = 1; i < n; i++) {
            for(int j = 1; j < m; j++) {
                if(matrix[i][0] == 0 || matrix[0][j] == 0) {
                    matrix[i][j] = 0;
                }
            }
        }

        // Step 5: Handle first row
        if(firstRow) {
            for(int j = 0; j < m; j++) {
                matrix[0][j] = 0;
            }
        }

        // Step 6: Handle first column
        if(firstCol) {
            for(int i = 0; i < n; i++) {
                matrix[i][0] = 0;
            }
        }
    }
};