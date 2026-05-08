class Solution {
public:
    const int MOD = 1337;

    // Fast exponentiation
    int power(int a, int b) {
        a %= MOD;
        int res = 1;

        while (b > 0) {
            if (b & 1)
                res = (res * a) % MOD;

            a = (a * a) % MOD;
            b >>= 1;
        }

        return res;
    }

    int superPow(int a, vector<int>& b) {
        int result = 1;

        for (int digit : b) {
            // result = result^10 * a^digit
            result = (power(result, 10) * power(a, digit)) % MOD;
        }

        return result;
    }
};