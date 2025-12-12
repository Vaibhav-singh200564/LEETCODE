class Solution {
public:
    int minTimeToType(string word) {
        char curr = 'a';     // pointer starts at 'a'
        int time = 0;

        for(char ch : word){
            int clockwise = abs(ch - curr);
            int anticlockwise = 26 - clockwise;
            time += min(clockwise, anticlockwise) + 1; // +1 for typing
            curr = ch;
        }

        return time;
    }
};
