class Bitset {
public:
    string bits;      // stores the bit values as '0' or '1'
    int cnt1 = 0;     // count of 1s
    bool flipped = false; // track if the bits are flipped

    Bitset(int size) {
        bits = string(size, '0');
    }

    void fix(int idx) {
        if (!flipped) {
            if (bits[idx] == '0') {
                bits[idx] = '1';
                cnt1++;
            }
        } else { // if flipped, bits are opposite
            if (bits[idx] == '1') {
                bits[idx] = '0';
                cnt1++;
            }
        }
    }

    void unfix(int idx) {
        if (!flipped) {
            if (bits[idx] == '1') {
                bits[idx] = '0';
                cnt1--;
            }
        } else {
            if (bits[idx] == '0') {
                bits[idx] = '1';
                cnt1--;
            }
        }
    }

    void flip() {
        flipped = !flipped;
        cnt1 = bits.size() - cnt1;
    }

    bool all() {
        return cnt1 == bits.size();
    }

    bool one() {
        return cnt1 > 0;
    }

    int count() {
        return cnt1;
    }

    string toString() {
        string res = bits;
        if (flipped) {
            for (char &c : res) {
                c = (c == '1' ? '0' : '1');
            }
        }
        return res;
    }
};
