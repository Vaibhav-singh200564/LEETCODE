class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int Esum=0;
        int Dsum=0;
        for(int num:nums){
            Esum+=num;
            int temp=num;
            while(temp>0){
                int ld=temp%10;
                Dsum+=ld;
                temp/=10;
            }
        }
        return Esum-Dsum;
    }
};