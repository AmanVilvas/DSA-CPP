class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> arr(nums.size());
        long long post = 0, neg = 1;
       for(int i=0; i<nums.size(); i++){
        if(nums[i] > 0){
            arr[post] = nums[i];
            post += 2;
        } else{
             arr[neg] = nums[i];
            neg += 2;
        }
       }
       return arr;
    }
};