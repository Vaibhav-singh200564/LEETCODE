class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> charIndex;
        int maxLength = 0;
        int start = 0;

        for (int end = 0; end < s.length(); ++end) {
            char currentChar = s[end];

            // If the character is already in the map and its index is >= start
            if (charIndex.find(currentChar) != charIndex.end() && charIndex[currentChar] >= start) {
                start = charIndex[currentChar] + 1;  // move the start to right of the repeated char
            }

            charIndex[currentChar] = end;  // update or insert the character's index
            maxLength = max(maxLength, end - start + 1);  // calculate the window size
        }

        return maxLength;
    }
};
