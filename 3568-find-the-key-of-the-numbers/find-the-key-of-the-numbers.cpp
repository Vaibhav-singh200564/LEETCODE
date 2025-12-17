class Solution {
public:
    int generateKey(int num1, int num2, int num3) {

        // STEP 1: convert numbers to 4-digit strings
        string a = to_string(num1);
        string b = to_string(num2);
        string c = to_string(num3);

        while (a.size() < 4) a = "0" + a;
        while (b.size() < 4) b = "0" + b;
        while (c.size() < 4) c = "0" + c;

        // STEP 2: find min digit at each position
        string result = "";
        for (int i = 0; i < 4; i++) {
            char mn = min(a[i], min(b[i], c[i]));
            result += mn;
        }

        // STEP 3: convert to int (leading zeros removed automatically)
        return stoi(result);
    }
};
