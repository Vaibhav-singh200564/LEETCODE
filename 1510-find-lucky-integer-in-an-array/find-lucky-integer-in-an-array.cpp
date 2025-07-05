class Solution {
public:
    int findLucky(vector<int>& arr) {
        int n=arr.size();
        int result=-1;
        for(int i=0; i<n; i++){
            int freq=0;
            for(int j=0; j<n; j++){
                if(arr[i]==arr[j]){
                    freq++;
                }
            }
            if(freq==arr[i]){
                result=max(result,arr[i]);
            }
        }
        return result;
    }
};