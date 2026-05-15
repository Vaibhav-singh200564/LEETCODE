class Solution {
public:
    string convertToBase7(int num) {
        
        // Special case
        if(num == 0) return "0";

        bool negative = false;

        // Check if number is negative
        if(num < 0){
            negative = true;
            num = -num;
        }

        string ans = "";

        // Convert to base 7
        while(num > 0){
            int rem = num % 7;
            ans = char(rem + '0') + ans;
            num /= 7;
        }

        // Add negative sign if needed
        if(negative){
            ans = "-" + ans;
        }

        return ans;
    }
};