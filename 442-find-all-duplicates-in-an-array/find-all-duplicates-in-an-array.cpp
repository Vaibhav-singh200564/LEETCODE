class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        set<int> seen;          // Ordered set
        vector<int> result;

        for (int num : nums) {
            if (seen.count(num)) {
                result.push_back(num); // Duplicate found
            } else {
                seen.insert(num); // First occurrence
            }
        }

        return result;
    }
};
