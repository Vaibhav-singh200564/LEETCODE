class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        vector<int>& arr = customers;
        int n = arr.size();
        int k = minutes;
        int maxLoss = 0;
        int maxIdx = 0;

        for(int i = 0; i <= n - k; i++){
            int currLoss = 0;
            for(int j = i; j < i + k; j++){
                if(grumpy[j] == 1)   // ✅ i → j
                    currLoss += arr[j];
            }
            if(maxLoss < currLoss){
                maxLoss = currLoss;
                maxIdx = i;
            }
        }

        for(int i = maxIdx; i < maxIdx + k; i++){
            if(grumpy[i] == 1)
                grumpy[i] = 0;
        }

        int sum = 0;
        for(int i = 0; i < n; i++){
            if(grumpy[i] == 0)       // ✅ condition added
                sum += arr[i];      // ✅ grumpy → arr
        }

        return sum;                 // ✅ missing return
    }
};
