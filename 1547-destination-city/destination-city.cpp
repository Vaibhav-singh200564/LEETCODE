class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string, int> startMap;

        
        for (auto& path : paths) {
            startMap[path[0]] = 1;  
        }

    
        for (auto& path : paths) {
            string destination = path[1];
            if (startMap.find(destination) == startMap.end()) {
                return destination;  
            }
        }

        return ""; 
    }
};
