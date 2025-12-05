class Solution {
public:

    double pow(double x, long n){

        if(x == 0){
            return 0;
        }if( n == 0){
            return 1;
        }if(n == 1){
            return x;
        }
        if(n % 2 == 0){
            return pow(x*x, n/2);
        }
        return x * pow(x, n-1);
        

    }

    double myPow(double x, long n) {
        long num = n;
    //    long ans = ;
       if(num < 0){
        return 1/pow(x, -1*n);
       } 
       return pow(x, n);
    }
};