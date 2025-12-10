class Solution {
public:
    vector<string> generateParenthesis(int n) {
        int op = n;
        int cl = n;
        string str = "";
        vector<string> final;
        solve(op, cl, str, final);
        return final;
    }

    void solve(int op, int cl, string &str, vector<string> &final){
        
        if(op == 0 && cl == 0){
            final.push_back(str);
            return;
        }
        if(op>0){
            // string op1 = str; 
            str.push_back('(');
            solve(op-1, cl, str, final);
            str.pop_back();
        }
        if(cl>0){
            if(cl > op){
                str.push_back(')');
                solve(op, cl-1, str, final);
                str.pop_back();
            }
        }

    }
};