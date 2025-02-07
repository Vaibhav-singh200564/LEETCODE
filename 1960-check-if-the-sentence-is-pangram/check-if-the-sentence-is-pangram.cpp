class Solution {
public:
    bool checkIfPangram(string sentence) {
        for(int i=0; i<26; i++){
            char ch='a'+i;
            if(sentence.find(ch)==string::npos){
                return false;
            }

        }
        return true;
        
    }
};