

class Solution {
public:
    string reorganizeString(string s) {
        int n = s.size();
        if (n <= 1) return s;

        vector<int> freq(26, 0);
        for (char c : s) freq[c - 'a']++;

        // Early impossibility check
        int maxf = 0;
        for (int f : freq) maxf = max(maxf, f);
        if (maxf > (n + 1) / 2) return "";

        // Max-heap of (count, char)
        priority_queue<pair<int,char>> pq;
        for (int i = 0; i < 26; ++i) {
            if (freq[i] > 0) pq.push({freq[i], char('a' + i)});
        }

        string result;
        while (pq.size() > 1) {
            auto p1 = pq.top(); pq.pop();
            auto p2 = pq.top(); pq.pop();

            result.push_back(p1.second);
            result.push_back(p2.second);

            if (--p1.first > 0) pq.push(p1);
            if (--p2.first > 0) pq.push(p2);
        }

        if (!pq.empty()) {
            // one char left
            result.push_back(pq.top().second);
        }

        return result;
    }
};
