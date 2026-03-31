class Solution {
public:
    vector<vector<int>> result;

    // sum tracks current sum of chosen numbers
    void bruteForce(vector<int>& candidates, vector<int>& current, int sum, int start, int target) {
        if (sum == target) {
            result.push_back(current); // valid combination
            return;
        }
        if (sum > target) return; // exceeded target

        for (int i = start; i < candidates.size(); i++) {
            current.push_back(candidates[i]); // choose number
            bruteForce(candidates, current, sum + candidates[i], i, target); // reuse same element
            current.pop_back(); // backtrack
        }
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> current;
        bruteForce(candidates, current, 0, 0, target);
        return result;
    }
};