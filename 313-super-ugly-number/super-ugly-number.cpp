class Solution {
public:
    int nthSuperUglyNumber(int n, vector<int>& primes) {
        int k = primes.size();
        
        vector<long long> ugly(n);
        ugly[0] = 1;
        
        vector<int> idx(k, 0);
        vector<long long> next(k);
        
        for(int i = 0; i < k; i++) {
            next[i] = primes[i];
        }
        
        for(int i = 1; i < n; i++) {
            
            long long mini = next[0];
            
            for(int j = 1; j < k; j++) {
                mini = min(mini, next[j]);
            }
            
            ugly[i] = mini;
            
            for(int j = 0; j < k; j++) {
                if(next[j] == mini) {
                    idx[j]++;
                    next[j] = ugly[idx[j]] * primes[j];
                }
            }
        }
        
        return ugly[n - 1];
    }
};