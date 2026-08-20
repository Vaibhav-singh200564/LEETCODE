class Solution { 
public: 

string reverse(string n){ 
    string r=""; 

    for(int i=n.size()-1; i>=0; i--){ 
        r=r+n[i]; 
    } 

    return r; 
} 

    int maximumNumberOfStringPairs(vector<string>& words) { 
        int n=words.size(); 
        int count=0; 

        for(int i=0; i<n; i++){ 
            for(int j=i+1; j<n; j++){ 
                string rev=reverse(words[i]); 

                if(rev==words[j]) 
                    count++; 
            } 
        } 

        return count; 
    } 
};