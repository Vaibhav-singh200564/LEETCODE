class Solution {
public:
    int maxNumberOfBalloons(string text) {
        vector<int> freq(26, 0), need(26, 0);
        for(char c: text) freq[c - 'a']++;
        string t = "balloon";
        for(char c: t) need[c - 'a']++;
        int ans = INT_MAX;
        for(int i = 0; i < 26; ++i){
            if(need[i] > 0){
                ans = min(ans, freq[i] / need[i]);
            }
        }
        if(ans == INT_MAX) return 0;
        return ans;
    }
};
