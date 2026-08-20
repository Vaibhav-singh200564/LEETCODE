class Solution {
public:
int reverse(int n){
    int r=0;
    while(n!=0){
        r=r*10;
        r=r+n%10;
        n/=10;
    }
    return r;
}
    bool isSameAfterReversals(int num) {
        int n=num;
        int rev=reverse(n);
        int reReverse=reverse(rev);
        if(reReverse==n) return true;
        else return false;
    }
};