class Solution {
public:
    int findNthDigit(int n) {
        long long digitLength = 1;
        long long count = 9;
        long long start = 1;

        // Find the range where nth digit exists
        while (n > digitLength * count) {
            n -= digitLength * count;
            digitLength++;
            count *= 10;
            start *= 10;
        }

        // Find the exact number
        start += (n - 1) / digitLength;

        // Convert number to string
        string num = to_string(start);

        // Return the required digit
        return num[(n - 1) % digitLength] - '0';
    }
};