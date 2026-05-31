class Solution {
public:
    string solveEquation(string s) {
        int n = s.size();
        int i = 0;

        int side = 1; // left = +1, right = -1
        int sign = 1;

        int coefX = 0;
        int constVal = 0;

        while (i < n) {
            if (s[i] == '=') {
                side = -1;
                sign = 1;
                i++;
                continue;
            }

            if (s[i] == '+') {
                sign = 1;
                i++;
                continue;
            }

            if (s[i] == '-') {
                sign = -1;
                i++;
                continue;
            }

            int num = 0;
            bool isNum = false;

            while (i < n && isdigit(s[i])) {
                num = num * 10 + (s[i] - '0');
                i++;
                isNum = true;
            }

            if (i < n && s[i] == 'x') {
                // it's a variable term
                if (!isNum) num = 1;
                coefX += side * sign * num;
                i++;
            } else {
                // constant term
                constVal += side * sign * num;
            }
        }

        if (coefX == 0) {
            if (constVal == 0) return "Infinite solutions";
            return "No solution";
        }

        int x = -constVal / coefX;
        return "x=" + to_string(x);
    }
};