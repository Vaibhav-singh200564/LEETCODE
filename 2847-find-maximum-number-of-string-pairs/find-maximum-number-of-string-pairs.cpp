class Solution {
public:
string reverse(string s){
    string ans="";
    for(int i=s.size()-1; i>=0; i--){
        ans+=s[i];
    }
    return ans;
}
    int maximumNumberOfStringPairs(vector<string>& words) {
        int n=words.size();
        int count=0;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                string rev=reverse(words[i]);
                if(rev==words[j]) count++;
            }
        }
        return count;
        
    }
};