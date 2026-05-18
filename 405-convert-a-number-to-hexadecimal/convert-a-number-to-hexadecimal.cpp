class Solution {
public:
    string toHex(int num) {
        if (num == 0) return "0";  // edge case

        string hexDigits = "0123456789abcdef";
        string result = "";

        // Use unsigned int to handle negative numbers (2's complement)
        unsigned int n = num;

        while (n > 0) {
            int rem = n % 16;                  // get remainder
            result = hexDigits[rem] + result;  // prepend the corresponding hex char
            n /= 16;                           // divide by 16
        }

        return result;
    }
};
