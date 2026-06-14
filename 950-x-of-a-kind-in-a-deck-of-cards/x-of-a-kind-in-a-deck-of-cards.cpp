class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int, int> mp;

        for (int card : deck) {
            mp[card]++;
        }

        int g = 0;

        for (auto &it : mp) {
            g = gcd(g, it.second);
        }

        return g >= 2;
    }
};