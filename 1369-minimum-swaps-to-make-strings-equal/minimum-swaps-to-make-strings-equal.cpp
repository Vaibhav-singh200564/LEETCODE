class Solution {
public:
    int minimumSwap(string s1, string s2) {
        int cnt_xy = 0, cnt_yx = 0;

        for(int i = 0; i < s1.size(); i++) {
            if(s1[i] == 'x' && s2[i] == 'y') cnt_xy++;
            else if(s1[i] == 'y' && s2[i] == 'x') cnt_yx++;
        }

        if((cnt_xy + cnt_yx) % 2 == 1) return -1;

        int swaps = cnt_xy / 2 + cnt_yx / 2;

        if(cnt_xy % 2 == 1) swaps += 2;

        return swaps;
    }
};
