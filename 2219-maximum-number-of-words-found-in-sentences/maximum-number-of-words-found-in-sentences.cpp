class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxCount = 0;

        for(int i = 0; i < sentences.size(); i++) {
            int count = 1; // start from 1 because the first word exists
            for(char c : sentences[i]) {
                if(c == ' ') count++; // every space = new word
            }
            if(count > maxCount) maxCount = count; // update max
        }

        return maxCount;
    }
};
