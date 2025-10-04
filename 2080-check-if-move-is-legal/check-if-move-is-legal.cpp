
class Solution {
public:
    bool checkMove(vector<vector<char>>& board, int rMove, int cMove, char color) {
        if (board[rMove][cMove] != '.') return false; // must be empty

        int n = 8;
        char opp = (color == 'W') ? 'B' : 'W';
        vector<pair<int, int>> dirs = {
            {1,0}, {-1,0}, {0,1}, {0,-1},
            {1,1}, {1,-1}, {-1,1}, {-1,-1}
        };

        for (auto [dr, dc] : dirs) {
            int r = rMove + dr, c = cMove + dc;
            bool hasOpp = false;

            // move while inside board and opponent color
            while (r >= 0 && r < n && c >= 0 && c < n && board[r][c] == opp) {
                r += dr;
                c += dc;
                hasOpp = true;
            }

            // must end on our color with at least one opponent between
            if (hasOpp && r >= 0 && r < n && c >= 0 && c < n && board[r][c] == color)
                return true;
        }

        return false;
    }
};
