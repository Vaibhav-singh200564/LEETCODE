class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> s;
        for(int x:nums){
            s.insert(x);
        }
        priority_queue<int> pq;
        for(auto x:s){
            pq.push(x);
        }
        if(pq.size()<3){
            return pq.top();
        }
        pq.pop();
        pq.pop();
        return pq.top();
    }
};