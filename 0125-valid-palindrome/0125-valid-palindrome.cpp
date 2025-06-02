class Solution {
public:
    bool alnum(char c){
        return (c >= 'a' && c <= 'z') ||
               (c >= 'A' && c <= 'Z') ||
               (c >= '0' && c <= '9');
    }

    char toLower(char c){
        if(c >= 'A' && c <= 'Z') return c + 32;
        return c;
    }

    bool checkIt(string &s, int i, int j){
        if(i >= j) return true;

        if(!alnum(s[i])) return checkIt(s, i + 1, j);
        if(!alnum(s[j])) return checkIt(s, i, j - 1);

        if(toLower(s[i]) != toLower(s[j])) return false;

        return checkIt(s, i + 1, j - 1); 
    }

    bool isPalindrome(string s) {
        return checkIt(s, 0, s.size() - 1);
    }
};
