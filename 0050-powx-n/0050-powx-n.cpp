class Solution {
public:

    double findpow(double x, long long n){
        if(n == 0){
            return 1;
        }
        double ans = findpow(x, n/2);
        double final = ans * ans;

        if(n % 2 == 1){
            final *= x;
        }
        return final;
    }

    double myPow(double x, long long n) {
    //    double ans = ; 
       if( n < 0){
        return 1/findpow(x,-n); 
       }
       return findpow(x,abs(n));
    }
};