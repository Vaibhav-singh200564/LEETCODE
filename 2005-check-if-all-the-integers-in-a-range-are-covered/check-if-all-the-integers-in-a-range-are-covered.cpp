class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        for (int num = left; num <= right; ++num) {
            bool covered = false;
            for (auto &range : ranges) {
                if (num >= range[0] && num <= range[1]) {
                    covered = true;
                    break;
                }
            }
            if (!covered) return false;
        }
        return true;
    }
};
