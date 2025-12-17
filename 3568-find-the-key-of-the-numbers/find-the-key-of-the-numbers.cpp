class Solution {
public:
    int generateKey(int num1, int num2, int num3) {

        string a = to_string(num1);
        string b = to_string(num2);
        string c = to_string(num3);

        while (a.size() < 4) a = "0" + a;
        while (b.size() < 4) b = "0" + b;
        while (c.size() < 4) c = "0" + c;

        string result = "";

        for (int i = 0; i < 4; i++) {
            char smallest = a[i];   // assume a[i] is smallest

            if (b[i] < smallest)
                smallest = b[i];

            if (c[i] < smallest)
                smallest = c[i];

            result += smallest;
        }

        return stoi(result);
    }
};
