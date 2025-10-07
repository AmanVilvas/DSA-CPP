class Solution {
public:
    vector<string> generateParenthesis(int n) {

        vector<string> ans;
        int open = n, close = n;
        string op = "";
        solve(ans, open, close, op);
        return ans;
    }

    void solve(vector<string> &ans, int open, int close, string op){
        if( open == 0 && close == 0){
            ans.push_back(op);
            return;
        }
        if(open){
            string op1 = op;
            op1.push_back('(');
            solve(ans, open-1, close, op1);
        }
        if(close > open){
            string op2 = op;
            op2.push_back(')');
            solve(ans, open, close-1, op2);
        }
        return;
    }
};