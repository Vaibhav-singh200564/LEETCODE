class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<pair<int,int>> dist; 
        for(int i = 0; i < points.size(); i++){
            int d = points[i][0]*points[i][0] + points[i][1]*points[i][1];
            dist.push_back({d, i});
        }
        
        sort(dist.begin(), dist.end());
        
        vector<vector<int>> result;
        for(int i = 0; i < k; i++){
            result.push_back(points[dist[i].second]);
        }
        return result;
    }
};
