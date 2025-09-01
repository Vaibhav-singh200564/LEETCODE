class Solution {
public:
    int balancedString(string s) {
        int n = s.size();
        unordered_map<char, int> freq;
        for (char c : s) freq[c]++;
        
        int target = n / 4;
        // if already balanced
        if (freq['Q'] == target && freq['W'] == target && freq['E'] == target && freq['R'] == target)
            return 0;
        
        int res = n;
        int l = 0;
        for (int r = 0; r < n; r++) {
            freq[s[r]]--;
            
            // shrink window while outside chars are valid
            while (l < n && freq['Q'] <= target && freq['W'] <= target && 
                   freq['E'] <= target && freq['R'] <= target) {
                res = min(res, r - l + 1);
                freq[s[l]]++;
                l++;
            }
        }
        return res;
    }
};
