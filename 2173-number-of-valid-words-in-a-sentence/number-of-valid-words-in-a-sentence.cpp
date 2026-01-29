class Solution {
public:
    int countValidWords(string sentence) {
        int count = 0;
        stringstream ss(sentence);
        string word;

        while (ss >> word) {
            int hyphen = 0, punct = 0;
            bool valid = true;

            for (int i = 0; i < word.size(); i++) {
                char c = word[i];

                if (isdigit(c)) {
                    valid = false;
                    break;
                }

                if (c == '-') {
                    hyphen++;
                    if (hyphen > 1 || i == 0 || i == word.size()-1 ||
                        !islower(word[i-1]) || !islower(word[i+1])) {
                        valid = false;
                        break;
                    }
                }

                if (c == '!' || c == '.' || c == ',') {
                    punct++;
                    if (punct > 1 || i != word.size()-1) {
                        valid = false;
                        break;
                    }
                }
            }

            if (valid) count++;
        }

        return count;
    }
};
