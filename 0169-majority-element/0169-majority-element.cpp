class Solution {
 public:
    int majorityElement(vector<int>& nums) {
     map<int,int>mpp;
     for(int i=0; i<nums.size(); i++){
        mpp[nums[i]]++;
     }
     int ans = -1;
     for(auto it: mpp){
        if(it.second > nums.size()/2){
            ans = it.first;
            return ans;
        }
     }
     return ans;
    }
};