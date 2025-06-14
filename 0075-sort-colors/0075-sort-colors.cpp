class Solution {
public:
    void sortColors(vector<int>& nums) {
        // vector<int>ans(nums.size(), 1);
        int start = 0;
        int last = nums.size()-1;
        int mid = 0;
        while(mid<=last){
            if(nums[mid] == 0){
                swap(nums[start], nums[mid]);
                start++;
                mid++;
            } else if(nums[mid] == 2){
                swap(nums[mid], nums[last]);
                last--;
            } else{
                mid++;
            }
        }
        // nums = ans;
    }
};