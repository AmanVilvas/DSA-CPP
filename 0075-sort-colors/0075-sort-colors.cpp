class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int>ans(nums.size(), 1);
        int start = 0;
        long long last = nums.size()-1;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == 0){
                ans[start] = 0;
                start++;
            }else if(nums[i] == 2) {
                ans[last] = 2;
                last--;
            }
        }
        nums = ans;
    }
};