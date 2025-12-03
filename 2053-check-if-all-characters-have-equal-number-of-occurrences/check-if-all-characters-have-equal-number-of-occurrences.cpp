#include <unordered_map>
#include <string>
using namespace std;

class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char, int> freq;
        
    
        for(char c : s) {
            freq[c]++;
        }
        
        int firstFreq = freq[s[0]];
        
        for(auto it : freq) {
            if(it.second != firstFreq) {
                return false;
            }
        }
        
        return true;
    }
};
