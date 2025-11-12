

class Solution {
public:
    int n, m;
    vector<vector<int>> dirs = {{1,0},{-1,0},{0,1},{0,-1}};

    void dfs(int i, int j, vector<vector<int>>& grid, queue<pair<int,int>>& q) {
        // boundary and visited checks
        if (i < 0 || j < 0 || i >= n || j >= m || grid[i][j] != 1)
            return;

        // mark visited
        grid[i][j] = 2;
        q.push({i, j});

        for (auto &d : dirs)
            dfs(i + d[0], j + d[1], grid, q);
    }

    int shortestBridge(vector<vector<int>>& grid) {
        n = grid.size();
        m = grid[0].size();
        queue<pair<int,int>> q;
        bool found = false;

        // Step 1: find and mark first island
        for (int i = 0; i < n; i++) {
            if (found) break;
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 1) {
                    dfs(i, j, grid, q);
                    found = true;
                    break;
                }
            }
        }

        // Step 2: BFS expansion
        int steps = 0;
        while (!q.empty()) {
            int size = q.size();
            while (size--) {
                auto [x, y] = q.front();
                q.pop();

                for (auto &d : dirs) {
                    int nx = x + d[0], ny = y + d[1];
                    if (nx < 0 || ny < 0 || nx >= n || ny >= m) continue;

                    if (grid[nx][ny] == 1)
                        return steps; // reached second island

                    if (grid[nx][ny] == 0) {
                        grid[nx][ny] = 2;
                        q.push({nx, ny});
                    }
                }
            }
            steps++;
        }
        return -1;
    }
};
