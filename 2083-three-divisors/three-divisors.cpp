class Solution {
public:
    bool isThree(int n) {
        int count = 2;   
        if (n == 1 || n == 2 || n == 3) {
            return false;
        } else {
            for (int i = 2; i <= n / 2; i++) {
                if (n % i == 0) {
                     count++;
                    if (count > 3) {
                        return false;
                    }
                    // count++;
                }
            }
            return count==3;
        }
    }
};
