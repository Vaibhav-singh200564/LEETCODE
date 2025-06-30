class Solution {
public:
    string largestGoodInteger(string num) {
    string res="";
        int c=0;
        for (int i=0;i<num.length()-2;i++){
            if((num[i]==num[i+1])&&(num[i+1]==num[i+2])){
                string tr=string(3,num[i]);
                if(tr>res){
                    res=tr;
                }
            }
        }
        return res;
    }
};