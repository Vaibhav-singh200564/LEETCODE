
class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxWater = 0;
        int i = 0;
        int j = height.size() - 1;

        while (i < j) {
            int width = j - i;
            int heightt = min(height[i], height[j]);
            int currWidth = heightt * width;
            maxWater = max(maxWater, currWidth);

            (height[i] < height[j]) ? i++ : j--;
        }
        return maxWater;
    }
};