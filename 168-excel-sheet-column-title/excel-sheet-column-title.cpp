class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans = "";

        while(columnNumber > 0){
            columnNumber--;                       // adjust for 1-based indexing
            int rem = columnNumber % 26;          
            ans += char('A' + rem);               
            columnNumber = columnNumber / 26;     
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};