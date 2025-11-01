class Solution {
public:
    vector<int> shortestAlternatingPaths(int n, vector<vector<int>>& redEdges, vector<vector<int>>& blueEdges) {
        vector<vector<pair<int,int>>> graph(n);
        for (auto &e : redEdges) graph[e[0]].push_back({e[1], 0});
        for (auto &e : blueEdges) graph[e[0]].push_back({e[1], 1});
        vector<vector<int>> dist(n, vector<int>(2, 1e9));
        queue<pair<int,int>> q;
        q.push({0,0});
        q.push({0,1});
        dist[0][0] = dist[0][1] = 0;
        while (!q.empty()) {
            auto [node, color] = q.front();
            q.pop();
            for (auto &[nei, c] : graph[node]) {
                if (c != color && dist[nei][c] == 1e9) {
                    dist[nei][c] = dist[node][color] + 1;
                    q.push({nei, c});
                }
            }
        }
        vector<int> ans(n);
        for (int i = 0; i < n; i++) {
            int d = min(dist[i][0], dist[i][1]);
            ans[i] = (d == 1e9 ? -1 : d);
        }
        return ans;
    }
};
