class Solution {
public:
    // Sieve of Eratosthenes to generate primes
    vector<int> sieve(int n) {
        vector<bool> isPrime(n+1, true);
        isPrime[0] = isPrime[1] = false;
        for (int i = 2; i*i <= n; i++) {
            if (isPrime[i]) {
                for (int j = i*i; j <= n; j += i) {
                    isPrime[j] = false;
                }
            }
        }
        vector<int> primes;
        for (int i = 2; i <= n; i++) {
            if (isPrime[i]) primes.push_back(i);
        }
        return primes;
    }

    int nonSpecialCount(int l, int r) {
        int total = r - l + 1;
        int limit = sqrt(r);
        vector<int> primes = sieve(limit);

        int specialCount = 0;
        for (int p : primes) {
            long long sq = 1LL * p * p;
            if (sq >= l && sq <= r) specialCount++;
        }
        return total - specialCount;
    }
};
