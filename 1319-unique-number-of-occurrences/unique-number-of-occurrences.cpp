class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> freq;

        for(int i = 0; i < arr.size(); i++){
            freq[arr[i]]++;
        }

        unordered_set<int> st;

        for(auto x : freq){
            if(st.find(x.second) != st.end()){
                return false;
            }

            st.insert(x.second);
        }

        return true;
    }
};