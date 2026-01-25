class Solution {
public:
    bool isVowel(char c) {
        return (c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
    }

    int maxVowels(string s, int k) {
        int n = s.length();
        int maxVowel = 0;
        int countVowel = 0;

        // first window
        for(int i = 0; i < k; i++){
            if(isVowel(s[i])){
                countVowel++;
            }
        }

        maxVowel = countVowel;

        int i = 1, j = k;

        // sliding window
        while(j < n){
            if(isVowel(s[j])) countVowel++;
            if(isVowel(s[i-1])) countVowel--;

            if(maxVowel < countVowel){
                maxVowel = countVowel;
            }

            i++;
            j++;
        }

        return maxVowel;
    }
};
