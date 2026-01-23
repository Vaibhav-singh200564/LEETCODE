class Solution {
public:
    bool backspaceCompare(string s, string t) {
        vector<char> res1;
        for(char ch : s){
            if(ch == '#'){
                if(!res1.empty()) res1.pop_back();
            } else {
                res1.push_back(ch);  // corrected: use res1.push_back instead of res+=ch
            }
        }

        vector<char> res2;
        for(char ch : t){
            if(ch == '#'){
                if(!res2.empty()) res2.pop_back();
            } else {
                res2.push_back(ch);  // corrected: use res2.push_back instead of res2+=ch
            }
        }

        return res1 == res2;  // compare the processed vectors, not s==t
    }
};
