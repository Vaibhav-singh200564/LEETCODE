class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        vector<int> ans;

        for (int q : queries) {
            vector<int> temp = nums;   // copy
            sort(temp.begin(), temp.end());

            int sum = 0;
            int count = 0;

            for (int i = 0; i < temp.size(); i++) {
                sum += temp[i];
                if (sum <= q)
                    count++;
                else
                    break;
            }

            ans.push_back(count);
        }

        return ans;
    }
};
