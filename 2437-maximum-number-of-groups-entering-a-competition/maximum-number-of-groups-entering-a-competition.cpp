class Solution {
public:
    int maximumGroups(vector<int>& grades) {
        int n = grades.size();
        int k = 0; // number of groups
        int total = 0; // total students used so far
        
        while (total + (k + 1) <= n) {
            k++;
            total += k;
        }
        return k;
    }
};
