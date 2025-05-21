class Solution {
public:
    int reverse(int x) {
     long long ans = 0;
     int sol;
    
    
   while(x){
       sol = x%10;
        if((ans>INT_MAX/10) || (ans<INT_MIN/10)){return 0;}
       if(sol != 0  || ans != 0){ ans = sol + ans*10;}
        x /= 10;
   }
       return ans; 
    }
};