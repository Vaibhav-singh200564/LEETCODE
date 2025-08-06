class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_set<int> seen;
        vector<int> result;

        for (int num : nums) {
            if (seen.count(num)) {
                result.push_back(num); // Already seen → duplicate
            } else {
                seen.insert(num); // First time → insert into set
            }
        }

        return result;
    }
};
