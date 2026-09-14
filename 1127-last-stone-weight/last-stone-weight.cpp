


class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {

        priority_queue<int> pq;

        // 1. Saare stones PQ mein daalo
        for (int stone : stones) {
            pq.push(stone);
        }

        // 2. Jab tak 2 ya zyada stones hain
        while (pq.size() > 1) {

            // Sabse bada
            int y = pq.top();
            pq.pop();

            // Dusra sabse bada
            int x = pq.top();
            pq.pop();

            // Agar different hain
            if (x != y) {
                pq.push(y - x);
            }
        }

        // Agar kuch nahi bacha
        if (pq.empty()) {
            return 0;
        }

        // Last stone
        return pq.top();
    }
};