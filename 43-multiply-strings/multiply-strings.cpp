class Solution {
public:
    string multiply(string num1, string num2) {
        if (num1 == "0" || num2 == "0") return "0";

        int len1 = num1.size(), len2 = num2.size();
        vector<int> result(len1 + len2, 0);

        // Reverse iterate through both numbers
        for (int i = len1 - 1; i >= 0; i--) {
            for (int j = len2 - 1; j >= 0; j--) {
                int mul = (num1[i] - '0') * (num2[j] - '0');
                int sum = mul + result[i + j + 1];

                result[i + j + 1] = sum % 10;
                result[i + j] += sum / 10;
            }
        }

        // Convert vector to string
        string product = "";
        for (int num : result) {
            if (!(product.empty() && num == 0)) { // Skip leading zeros
                product += (num + '0');
            }
        }

        return product.empty() ? "0" : product;
    }
};
