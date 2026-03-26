class Solution {
public:
    bool dfs(vector<vector<char>>& board, int i, int j, string& word, int index) {
        // base case
        if(index == word.size()) return true;

        // boundary + mismatch check
        if(i < 0 || j < 0 || i >= board.size() || j >= board[0].size() 
           || board[i][j] != word[index]) {
            return false;
        }

        char temp = board[i][j];
        board[i][j] = '#'; // mark visited

        // explore 4 directions
        bool found = dfs(board, i+1, j, word, index+1) ||
                     dfs(board, i-1, j, word, index+1) ||
                     dfs(board, i, j+1, word, index+1) ||
                     dfs(board, i, j-1, word, index+1);

        board[i][j] = temp; // backtrack

        return found;
    }

    bool exist(vector<vector<char>>& board, string word) {
        int n = board.size();
        int m = board[0].size();

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(dfs(board, i, j, word, 0)) {
                    return true;
                }
            }
        }
        return false;
    }
};