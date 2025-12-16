#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> arr;
        for (int num : nums) arr.push_back(to_string(num));

        sort(arr.begin(), arr.end(), [](string &s1, string &s2) {
            return s1 + s2 > s2 + s1;
        });

        if (arr[0] == "0") return "0";

        string result = "";
        for (string &s : arr) result += s;

        return result;
    }
};
