class Solution {
public:
    int maxDistance(vector<int>& nums) {
        int n = nums.size();
        int maxDis = 0;

        for (int i = 0; i < n; i++) {
            int dist = 0;
            for (int j = i + 1; j < n; j++) {
                if (nums[j] == nums[i]) {
                    continue;
                } else {
                    dist = j - i;
                    maxDis = max(maxDis, dist);
                }
            }
        }
        return maxDis;
    }
};
