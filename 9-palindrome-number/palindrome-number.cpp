class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) {
            return false;  // Negative numbers are not palindromes
        }
        
        int original = x;
        int reversed = 0;

        while(x > 0) {
            int digit = x % 10;
            
            // Check for overflow before multiplying by 10
            if (reversed > INT_MAX / 10 || (reversed == INT_MAX / 10 && digit > 7)) {
                return false;  // Avoid overflow
            }
            
            reversed = reversed * 10 + digit;
            x /= 10;
        }

        return original == reversed;
    }
};
