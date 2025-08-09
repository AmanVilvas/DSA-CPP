class Solution {
public:
    int mySqrt(int x) {
        int low = 0, high = x/2;
        int ans;
        while(low <= high){
            long long int mid = low + (high - low)/2;
            long long int midSq = mid*mid;
            long long int midSq1 = (mid+1)*(mid+1);
            if(midSq == x){
                return mid;
                ans = mid;
            }
            else if(midSq < x && midSq1>x){
                ans = mid;
                return mid;
            } else if(midSq > x){
                high = mid - 1;
            } else{
                low = mid + 1;
            }
        }
        return ans;
    }
};