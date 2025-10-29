class Solution {
public:
    string removeDuplicates(string s) {
        if(s.empty()) return "";
        stack<char> st;
        st.push(s[0]);
        for(int i=1; i<s.length(); i++){
            if( !st.empty()  && s[i]==st.top()){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
        string result="";
        while(st.size()>0){
            result=result+st.top();
            st.pop();
        }
        reverse(result.begin(),result.end());
        return result;
        
    }
};