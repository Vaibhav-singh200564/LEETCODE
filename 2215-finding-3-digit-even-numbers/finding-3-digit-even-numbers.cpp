class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        vector<int> ans;
        vector<int> count(10, 0);

        // Frequency of digits
        for (int d : digits) count[d]++;

        // Check all 3-digit even numbers
        for (int num = 100; num <= 999; num++) {
            if (num % 2 != 0) continue;

            int a = num / 100;
            int b = (num / 10) % 10;
            int c = num % 10;

            vector<int> need(10, 0);
            need[a]++; need[b]++; need[c]++;

            bool possible = true;
            for (int d = 0; d < 10; d++) {
                if (need[d] > count[d]) {
                    possible = false;
                    break;
                }
            }

            if (possible) ans.push_back(num);
        }

        return ans;
    }
};
