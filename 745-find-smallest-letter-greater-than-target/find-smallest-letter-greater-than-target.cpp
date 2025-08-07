class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        sort(letters.begin(), letters.end()); // Optional, only if input is not already sorted
        for (char ch : letters) {
            if (ch > target) {
                return ch;
            }
        }
        return letters[0]; // Return the smallest letter (circular array)
    }
};
