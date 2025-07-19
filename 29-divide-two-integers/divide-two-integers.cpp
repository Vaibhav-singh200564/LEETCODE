class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == INT_MIN && divisor == -1) return INT_MAX;

        long long a = dividend;
        long long b = divisor;
        bool sign = (a > 0) == (b > 0);

        a = abs(a);
        b = abs(b);

        long long result = 0;
        while (a >= b) {
            long long temp = b, multiple = 1;
            while (a >= (temp << 1)) {
                temp <<= 1;
                multiple <<= 1;
            }
            a -= temp;
            result += multiple;
        }

        result = sign ? result : -result;
        return result;
    }
};
