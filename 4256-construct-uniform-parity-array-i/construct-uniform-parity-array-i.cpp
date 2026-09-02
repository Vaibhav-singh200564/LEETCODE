class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        bool odd = false;
        bool even = false;

        for (int i = 0; i < nums1.size(); i++) {
            if (nums1[i] % 2 == 0)
                even = true;
            else
                odd = true;
        }

        // If all numbers already have the same parity
        if (!odd || !even)
            return true;

        // If both odd and even exist,
        // subtracting an odd and even number gives odd.
        return true;
    }
};