class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> frq;
        for(int i=0; i<s.length(); i++){
            frq[s[i]]++;
        }
        for(int i=0; i<s.length(); i++){
            if(frq[s[i]]==1) return i;
        }
        return -1;
    }
};