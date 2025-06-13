class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        map<int, int> mpp;
        for(int i=0; i<nums.size(); i++){
            int need = target - nums[i];
            if(mpp.find(need) != mpp.end()){
                return {i,mpp[need]};
            }else {
                mpp[nums[i]] = i;
            }
            
        }

        return {};
    }
};