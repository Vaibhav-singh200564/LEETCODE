class Solution {
public:
bool isVowel(char &ch){
    return (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'|| ch=='A' || ch=='E' || ch== 'I' || ch=='O'  || ch=='U');
    
}
    bool halvesAreAlike(string s) {
        int i=0;
        int mid=s.length()/2;
        int j=mid;
        int countL=0;
       int  countR=0;
        while(i<mid && j<s.length()){
            if(isVowel(s[i])) countL++;
    
            if(isVowel(s[j])) countR++; 
            j++;
            i++;  
        }
          return countL==countR;   
    }
  
};