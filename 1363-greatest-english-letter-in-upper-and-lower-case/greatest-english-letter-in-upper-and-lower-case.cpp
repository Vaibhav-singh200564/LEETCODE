class Solution {
public:
    string greatestLetter(string s) {
        set<char> lower,upper;
        for(int ch:s){
            if(islower(ch)){
                lower.insert(ch);
            }else{
                upper.insert(ch);
            }
        }
        string ans="";
        for(char c:lower){
            if(upper.count(toupper(c))){
                ans.push_back(toupper(c));
            }
        }
        if(ans.empty()) return "";
        sort(ans.begin(),ans.end());
        return string(1,ans.back());
    }
};