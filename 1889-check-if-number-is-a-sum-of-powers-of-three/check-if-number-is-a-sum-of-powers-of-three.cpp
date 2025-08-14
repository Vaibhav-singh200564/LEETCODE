class Solution {
public:
    bool checkPowersOfThree(int n) {
        while (n > 0) {
            if (n % 3 == 2) return false; // can't have digit '2' in base-3
            n /= 3;
        }
        return true;
    }
};
