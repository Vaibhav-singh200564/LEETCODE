class Solution {
public:
    int bestClosingTime(string customers) {
        int n = customers.size();
        int pre[n + 1];
        int suff[n + 1];
        pre[0] = 0;
        for (int i = 0; i < n; i++) {
            int count = 0;
            if (customers[i] == 'N') count++;
            pre[i + 1] = pre[i] + count;
        }
        suff[n] = 0;
        for (int i = n - 1; i >= 0; i--) {
            int Ycount = 0;
            if (customers[i] == 'Y') Ycount++;
            suff[i] = suff[i + 1] + Ycount;
        }
        int minPen = n;
        for (int i = 0; i <= n; i++) {
            pre[i] = pre[i] + suff[i];
            int pen = pre[i];
            minPen = min(minPen, pen);
        }
        for (int i = 0; i <= n; i++) {
            int pen = pre[i];
            if (pen == minPen) return i;
        }
        return n;
    }
};
