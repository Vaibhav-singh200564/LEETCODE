class Solution {
public:

    int prio(char ch){
        if(ch=='+' || ch=='-') return 1;
        if(ch=='*' || ch=='/') return 2;
        return 0;
    }

    long long solve(long long a, long long b, char op){
        if(op == '+') return a + b;
        if(op == '-') return a - b;
        if(op == '*') return a * b;
        if(op == '/') return a / b;
        return 0;
    }

    bool isUnary(const string &s, int i){
        if(i == 0) return true;          // start of string
        char p = s[i-1];

        // skip backwards over whitespace (spaces, newline, tabs)
        while(i > 0 && (p == ' ' || p == '\n' || p == '\t' || p == '\r')){
            i--;
            p = s[i-1];
        }

        return (p=='(' || p=='+' || p=='-' || p=='*' || p=='/');
    }

    int calculate(string s) {

        // =============================
        // Preprocess: convert unary signs → insert 0
        // =============================
        string t = "";
        for(int i=0; i<s.size(); i++){
            char c = s[i];
            if(c==' ' || c=='\n' || c=='\t' || c=='\r') continue;

            if((c=='+' || c=='-') && isUnary(s, i)){
                t += '0';
            }
            t += c;
        }

        stack<long long> val;
        stack<char> op;

        // =============================
        // Evaluate expression
        // =============================
        for(int i=0; i<t.size(); i++){
            char ch = t[i];

            if(isdigit(ch)){
                long long num=0;
                while(i<t.size() && isdigit(t[i])){
                    num = num*10 + (t[i]-'0');
                    i++;
                }
                i--;
                val.push(num);
            }
            else if(ch=='('){
                op.push(ch);
            }
            else if(ch==')'){
                while(!op.empty() && op.top()!='('){
                    long long b = val.top(); val.pop();
                    long long a = val.top(); val.pop();
                    char o = op.top(); op.pop();
                    val.push(solve(a,b,o));
                }
                op.pop(); // pop (
            }
            else { // operator
                while(!op.empty() && op.top()!='(' &&
                      prio(op.top()) >= prio(ch)){
                    long long b = val.top(); val.pop();
                    long long a = val.top(); val.pop();
                    char o = op.top(); op.pop();
                    val.push(solve(a,b,o));
                }
                op.push(ch);
            }
        }

        while(!op.empty()){
            long long b = val.top(); val.pop();
            long long a = val.top(); val.pop();
            char o = op.top(); op.pop();
            val.push(solve(a,b,o));
        }

        return val.top();
    }
};
