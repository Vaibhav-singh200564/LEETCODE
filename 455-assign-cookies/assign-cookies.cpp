#include <vector>
#include <algorithm>

class Solution {
public:
    int findContentChildren(std::vector<int>& g, std::vector<int>& s) {
        std::sort(g.begin(), g.end());  // Sort greed factor
        std::sort(s.begin(), s.end());  // Sort cookie sizes
        
        int i = 0, j = 0;  // Pointers for children and cookies
        while (i < g.size() && j < s.size()) {
            if (s[j] >= g[i]) {  // If cookie can satisfy child
                i++;  // Move to next child
            }
            j++;  // Move to next cookie
        }
        
        return i;  // Number of satisfied children
    }
};
