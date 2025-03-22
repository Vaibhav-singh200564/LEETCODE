#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        if (n < k) return 0;  // If k is greater than array size, return 0

        long long maxSum = 0, currSum = 0;
        unordered_map<int, int> freq; // Frequency map to track occurrences

        // Initialize the first window
        for (int i = 0; i < k; i++) {
            freq[nums[i]]++;
            currSum += nums[i];
        }

        // If the first window contains only unique elements, update maxSum
        if (freq.size() == k) maxSum = currSum;

        // Sliding window approach
        for (int i = k; i < n; i++) {
            int removeElem = nums[i - k];
            int addElem = nums[i];

            // Remove the element going out of the window
            freq[removeElem]--;
            if (freq[removeElem] == 0) {
                freq.erase(removeElem);
            }
            currSum -= removeElem;

            // Add the new element coming into the window
            freq[addElem]++;
            currSum += addElem;

            // If all elements in the current window are unique, update maxSum
            if (freq.size() == k) {
                maxSum = max(maxSum, currSum);
            }
        }

        return maxSum;
    }
};
