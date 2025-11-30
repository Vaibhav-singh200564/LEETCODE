class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        // Years range from 1950 to 2050
        vector<int> yearCount(2051, 0);
        
        // Mark the population changes
        for (auto &log : logs) {
            int birth = log[0];
            int death = log[1];
            yearCount[birth] += 1;
            yearCount[death] -= 1;  // person dies at the start of death year
        }
        
        int maxPop = 0;
        int yearWithMaxPop = 1950;
        int currentPop = 0;
        
        for (int year = 1950; year <= 2050; ++year) {
            currentPop += yearCount[year];
            if (currentPop > maxPop) {
                maxPop = currentPop;
                yearWithMaxPop = year;
            }
        }
        
        return yearWithMaxPop;
    }
};
