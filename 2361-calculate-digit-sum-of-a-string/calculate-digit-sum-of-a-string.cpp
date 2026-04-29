class Solution {
public:
    string digitSum(string s, int k) {
        
        while (s.length() > k) {
            string newStr = "";
            
            for (int i = 0; i < s.length(); i += k) {
                int sum = 0;
                
                // process group of size k
                for (int j = i; j < i + k && j < s.length(); j++) {
                    sum += s[j] - '0';
                }
                
                newStr += to_string(sum);
            }
            
            s = newStr;
        }
        
        return s;
    }
};