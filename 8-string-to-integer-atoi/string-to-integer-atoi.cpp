class Solution {
public:
    int myAtoi(string s) {
        int i = 0, n = s.size();
        while (i < n && s[i] == ' ') i++;  // Ignore leading spaces
        
        int sign = 1;  // Default positive
        if (i < n && (s[i] == '+' || s[i] == '-')) {
            if (s[i] == '-') sign = -1;
            i++;
        }
        
        long result = 0;  // Use long to handle overflow before clamping
        while (i < n && isdigit(s[i])) {
            result = result * 10 + (s[i] - '0');
            if (result > INT_MAX)  // Check overflow
                return sign == 1 ? INT_MAX : INT_MIN;
            i++;
        }
        
        return sign * result;
    }
};
