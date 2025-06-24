class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int total = 0;

        for (string word : words) {
            string temp = chars; // Copy of chars to modify (simulate available letters)
            bool good = true;

            for (char c : word) {
                size_t pos = temp.find(c); // Try to find the character
                if (pos != string::npos) {
                    temp.erase(pos, 1); // Remove that character (used once)
                } else {
                    good = false; // Character not found or already used
                    break;
                }
            }

            if (good) {
                total += word.length();
            }
        }

        return total;
    }
};
