class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        
        // Step 1: Count frequency
        unordered_map<string, int> freq;
        for (auto &word : words) {
            freq[word]++;
        }

        // Step 2: Store in vector
        vector<pair<string, int>> vec(freq.begin(), freq.end());

        // Step 3: Sort based on conditions
        sort(vec.begin(), vec.end(), [](pair<string,int> &a, pair<string,int> &b) {
            if (a.second == b.second)
                return a.first < b.first;   // lexicographically smaller first
            return a.second > b.second;     // higher frequency first
        });

        // Step 4: Take top k
        vector<string> ans;
        for (int i = 0; i < k; i++) {
            ans.push_back(vec[i].first);
        }

        return ans;
    }
};