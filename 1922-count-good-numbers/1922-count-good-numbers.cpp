class Solution {
public:
    int findpow(long long a, long long b){
        
        // int m = pow(10, 9);
        int M = 1e9 + 7;
        if(b == 0){
            return 1;
        }
        long long half = findpow(a, b/2);
        long long ans = (half * half) % M;
        if(b%2 == 1){
            ans = (ans * a) % M;
        }
        return ans;
    }

    int countGoodNumbers(long long n) {
        int M = 1e9 + 7;
    //    int even = ;
        return (long long) findpow(5,(n+1)/2) * findpow(4, n/2)  % M;
    }
};
