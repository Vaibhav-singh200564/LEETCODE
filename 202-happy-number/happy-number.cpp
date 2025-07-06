class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> seen;  // To keep track of numbers we've already seen
        
        while (n != 1 && !seen.count(n)) {
            seen.insert(n);       // Mark this number as seen
            int sum = 0;
            
            // Find sum of squares of digits
            while (n > 0) {
                int digit = n % 10;
                sum += digit * digit;
                n /= 10;
            }
            
            n = sum;  // Replace n with the new sum
        }
        
        return n == 1;
    }
};
