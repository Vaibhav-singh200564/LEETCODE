bool compare(string s1, string s2) {
    if (s1 + s2 > s2 + s1)
        return true;   // s1 pehle aayega
    else
        return false;  // s2 pehle aayega
}

class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> arr;
        for (int num : nums) arr.push_back(to_string(num));

        sort(arr.begin(), arr.end(), compare);  

        if (arr[0] == "0") return "0";

        string result = "";
        for (string &s : arr) result += s;

        return result;
    }
};
