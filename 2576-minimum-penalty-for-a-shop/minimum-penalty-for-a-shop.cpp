class Solution {
public:
    int bestClosingTime(string customers) {
        int n = customers.size();
        int pref[n + 1];
        int suf[n + 1];

        pref[0] = 0;
        for (int i = 0; i < n; i++) {
            int count = 0;
            if (customers[i] == 'N') count++;
            pref[i + 1] = pref[i] + count;
        }

        suf[n] = 0;
        for (int i = n - 1; i >= 0; i--) {
            int scount = 0;
            if (customers[i] == 'Y') scount++;
            suf[i] = suf[i + 1] + scount;
        }

        int minPen = INT_MAX;
        for (int i = 0; i <= n; i++) {
            pref[i] += suf[i];
            minPen = min(minPen, pref[i]);
        }

        for (int i = 0; i <= n; i++) {
            if (pref[i] == minPen) return i;
        }

        return n;
    }
};
