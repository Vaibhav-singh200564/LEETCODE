class Solution {
public:
    const int MOD = 1e9 + 7;

    bool isPrime(int x) {
        if (x < 2) return false;

        for (int i = 2; i * i <= x; i++) {
            if (x % i == 0)
                return false;
        }

        return true;
    }

    long long factorial(int x) {
        long long ans = 1;

        for (int i = 2; i <= x; i++) {
            ans = (ans * i) % MOD;
        }

        return ans;
    }

    int numPrimeArrangements(int n) {
        int primeCount = 0;

        for (int i = 1; i <= n; i++) {
            if (isPrime(i))
                primeCount++;
        }

        int nonPrime = n - primeCount;

        long long ans =
            (factorial(primeCount) * factorial(nonPrime)) % MOD;

        return ans;
    }
};