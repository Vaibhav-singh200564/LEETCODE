class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int n = bank.size();
        int prev = 0;   // device count of last non-empty row
        int result = 0;

        for (int i = 0; i < n; i++) {
            int cnt = 0;
            for (char c : bank[i]) {
                if (c == '1') cnt++;
            }

            if (cnt > 0) {
                result += prev * cnt;  // beams formed with previous non-empty row
                prev = cnt;            // update last non-empty row
            }
        }

        return result;
    }
};
