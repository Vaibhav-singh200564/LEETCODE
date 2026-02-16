class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.empty()) return 0;                 // handle empty needle
        if (needle.size() > haystack.size()) return -1; // needle longer than haystack

        for (int i = 0; i <= haystack.size() - needle.size(); i++) {
            int j = 0;
            while (j < needle.size() && haystack[i + j] == needle[j]) {
                j++;
            }
            if (j == needle.size()) return i; // full match
        }

        return -1; // not found
    }
};
