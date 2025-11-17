class Solution {
public:
    vector<int> circularPermutation(int n, int start) {
        int total = 1 << n; // 2^n elements
        vector<int> grayCode(total);

        // Generate n-bit Gray code
        for (int i = 0; i < total; i++) {
            grayCode[i] = i ^ (i >> 1);
        }

        // Find the index of start
        int idx = 0;
        for (int i = 0; i < total; i++) {
            if (grayCode[i] == start) {
                idx = i;
                break;
            }
        }

        // Rotate the sequence so it starts with 'start'
        vector<int> result;
        for (int i = 0; i < total; i++) {
            result.push_back(grayCode[(i + idx) % total]);
        }

        return result;
    }
};
