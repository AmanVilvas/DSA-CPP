class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st;
        stack<char> st1;

        for(char c : s){
            if(c == '#'){
                if(!st.empty()) st.pop();
            }
            else{
                st.push(c);
            }
        }

        for(char c : t){
            if(c == '#'){
                if(!st1.empty()) st1.pop();
            }
            else{
                st1.push(c);
            }
        }

        while(!st.empty() && !st1.empty()){
            if(st.top() != st1.top()) return false;
            st.pop();
            st1.pop();
        }

        return st.empty() && st1.empty();
    }
};