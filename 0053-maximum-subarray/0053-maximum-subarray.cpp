class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sub = 0;
        int ans = INT_MIN;
        for(int i=0; i<nums.size(); i++){
            sub = max(nums[i] ,sub + nums[i]);
            ans = max(sub, ans);
        }
        return ans;
    }
};


//[-2,1,-3,4,-1,2,1,-5,4]

