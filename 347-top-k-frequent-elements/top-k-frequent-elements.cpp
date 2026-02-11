class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;

        // Step 1: Count frequencies
        for(int x : nums){
            freq[x]++;
        }

        // Step 2: Move frequencies to vector of pairs {num, count}
        vector<pair<int,int>> freqVec;
        for(auto it : freq){
            freqVec.push_back({it.first, it.second});
        }

        // Step 3: Sort descending by frequency
        sort(freqVec.begin(), freqVec.end(), [](pair<int,int>& a, pair<int,int>& b){
            return a.second > b.second;
        });

        // Step 4: Pick top k elements
        vector<int> ans;
        for(int i = 0; i < k; i++){
            ans.push_back(freqVec[i].first);
        }

        return ans;
    }
};
