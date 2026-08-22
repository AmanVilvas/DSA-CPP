class Solution {
public:
    int kthGrammar(int n, int k) {
        if(n == 1) return 0;
        int l = 1 << (n-2); /// cuz we are taking half do some maths to understand this :/
        if(k<= l) return kthGrammar(n-1, k);
        else return 1-kthGrammar(n-1, k-l);
    }
};