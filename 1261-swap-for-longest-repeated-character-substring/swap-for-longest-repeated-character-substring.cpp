class Solution {
public:
    int maxRepOpt1(string text) {
        int n = text.size();
        vector<int> freq(26, 0);
        for (char c : text) freq[c - 'a']++;

        int ans = 0;
        for (int i = 0; i < n; ) {
            int j = i;
            while (j < n && text[j] == text[i]) j++;
            int blockLen = j - i;

            // case 1: extend this block
            ans = max(ans, min(blockLen + 1, freq[text[i] - 'a']));

            // case 2: merge two blocks with one gap
            int k = j + 1;
            while (k < n && text[k] == text[i]) k++;
            int nextBlockLen = k - (j + 1);
            if (nextBlockLen > 0) {
                ans = max(ans, min(blockLen + nextBlockLen + 1, freq[text[i] - 'a']));
            }

            i = j;
        }
        return ans;
    }
};
