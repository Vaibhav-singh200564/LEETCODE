class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        vector<int> v;
        string s = "";

        // Convert array to string
        for(int i = 0; i < num.size(); i++){
            s += to_string(num[i]);
        }

        // Convert string to number digit by digit (safe)
        string res_str = "";
        int carry = k;
        for(int i = s.size() - 1; i >= 0; i--){
            int sum = (s[i] - '0') + carry;
            res_str += (sum % 10 + '0');
            carry = sum / 10;
        }

        // Add remaining carry
        while(carry > 0){
            res_str += (carry % 10 + '0');
            carry /= 10;
        }

        // Reverse to get correct order
        reverse(res_str.begin(), res_str.end());

        // Convert string to vector<int>
        for(char c : res_str){
            v.push_back(c - '0');
        }

        return v;
    }
};
