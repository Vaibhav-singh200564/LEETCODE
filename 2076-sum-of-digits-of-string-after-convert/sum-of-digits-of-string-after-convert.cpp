class Solution {
public:
    int getLucky(string s, int k) {
        string numStr = "";
        
        // Step 1: Convert letters to numbers
        for (char c : s) {
            int val = c - 'a' + 1;  // 'a' -> 1, 'b' -> 2
            numStr += to_string(val);
        }
        
        // Step 2: Sum digits k times
        int sum = 0;
        for (int i = 0; i < k; i++) {
            sum = 0;
            for (char c : numStr) {
                sum += c - '0';  // convert char digit to int
            }
            numStr = to_string(sum);  // prepare for next iteration
        }
        
        return sum;
    }
};
