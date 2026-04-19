class Solution {
public:
    long long sumAndMultiply(int n) {
        string s = to_string(n);
        long long sum = 0;
        string x_str = "";

        for (char c : s) {
            if (c != '0') {
                x_str += c;
                sum += (c - '0');
            }
        }

        long long x = (x_str.empty()) ? 0 : stoll(x_str);
        return x * sum;
    }
};