class Solution {
public:
    string sortVowels(string s) {
        string vowels = "AEIOUaeiou";
        vector<char> v;
        
        // collect vowels
        for (char c : s) {
            if (vowels.find(c) != string::npos) {
                v.push_back(c);
            }
        }
        
        // sort vowels
        sort(v.begin(), v.end());
        
        // replace vowels in order
        int j = 0;
        for (int i = 0; i < s.size(); i++) {
            if (vowels.find(s[i]) != string::npos) {
                s[i] = v[j++];
            }
        }
        
        return s;
    }
};
