class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_set<int> seen; // to store numbers we have seen
        
        for(int num : arr) {
            // check if double or half of current number exists in set
            if(seen.count(num * 2) || (num % 2 == 0 && seen.count(num / 2))) {
                return true;
            }
            // add current number to set
            seen.insert(num);
        }
        
        return false;
    }
};
