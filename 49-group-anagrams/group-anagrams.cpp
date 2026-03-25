class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;

        for (auto s : strs) {
            string temp = s;
            sort(temp.begin(), temp.end()); // make key
            mp[temp].push_back(s);          // group anagrams
        }

        vector<vector<string>> ans;

        for (auto it : mp) {
            ans.push_back(it.second);
        }

        return ans;
    }
};