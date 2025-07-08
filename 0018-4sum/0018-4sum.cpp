class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<vector<int>>sol;
        // int sum = 0;
        for(int i=0; i<nums.size(); i++){
           if(i>0 && nums[i] == nums[i-1]){
            continue;
           }
        for(int j=i+1; j<nums.size(); j++){
            if(j>i+1 && nums[j] == nums[j-1]){
                continue;
            }
            int k = j+1;
            int l = nums.size()-1;
            while(k<l){
            long long sum = 1LL * nums[i]+nums[j]+nums[k]+nums[l];

           if(target == sum){
                vector<int> temp = {nums[i], nums[j], nums[k], nums[l]};
                sol.push_back(temp);
                k++,l--;
                 while (k < l && nums[k] == nums[k - 1]) k++;
                    while (k < l && nums[l] == nums[l + 1]) l--;
            }
            

             else if(sum > target){
                l--;
            }else{
                k++;
            }
           
            }
        }
        }
        return sol;
    }
};