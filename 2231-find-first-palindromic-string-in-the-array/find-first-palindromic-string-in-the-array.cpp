// class Solution {
// public:
//     string firstPalindrome(vector<string>& words) {
//         for(string word:words){
//             string rev=word;
//             reverse(rev.begin(),rev.end());
//             if(rev==word){
//                 return word;
//             }
//             // return "";
//         }
//         return "";
//     }
// };





class Solution {
public:
    bool isPalindrome(string &word) {
        int i = 0, j = word.length() - 1;

        while (i < j) {
            if (word[i] != word[j])
                return false;
            i++;
            j--;
        }
        return true;
    }

    string firstPalindrome(vector<string>& words) {
        for (string &word : words) {
            if (isPalindrome(word))
                return word;   // FIRST palindrome → return immediately
        }
        return "";
    }
};
