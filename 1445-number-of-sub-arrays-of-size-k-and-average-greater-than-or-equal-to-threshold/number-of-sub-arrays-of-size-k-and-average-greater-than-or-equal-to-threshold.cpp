class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n = arr.size();
        int count = 0;
        int windowSum = 0;
        int requiredSum = k * threshold;
        
        // sum of first k elements
        for(int i = 0; i < k; i++) {
            windowSum += arr[i];
        }
        if(windowSum >= requiredSum) count++;
        
        // sliding window
        for(int i = k; i < n; i++) {
            windowSum += arr[i] - arr[i - k];
            if(windowSum >= requiredSum) count++;
        }
        
        return count;
    }
};
