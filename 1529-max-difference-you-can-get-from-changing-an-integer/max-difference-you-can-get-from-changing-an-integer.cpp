class Solution {
public:
    int maxDiff(int num) {
        string s = to_string(num);
        
        // Make max
        string sMax = s;
        char toReplace = 0;
        for (char c : sMax) {
            if (c != '9') { 
                toReplace = c; 
                break; 
            }
        }
        if (toReplace) {
            for (char &c : sMax) {
                if (c == toReplace) c = '9';
            }
        }
        
        // Make min
        string sMin = s;
        char toReplaceMin = 0;
        if (sMin[0] != '1') {
            toReplaceMin = sMin[0];
            for (char &c : sMin) {
                if (c == toReplaceMin) c = '1';
            }
        } else {
            for (int i = 1; i < sMin.size(); i++) {
                if (sMin[i] != '0' && sMin[i] != '1') {
                    toReplaceMin = sMin[i];
                    break;
                }
            }
            if (toReplaceMin) {
                for (char &c : sMin) {
                    if (c == toReplaceMin) c = '0';
                }
            }
        }
        
        int maxVal = stoi(sMax);
        int minVal = stoi(sMin);
        
        return maxVal - minVal;
    }
};
