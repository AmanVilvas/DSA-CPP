class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int>subset;
        printS(ans, subset, 0, nums);
        return ans;
    }
    void printS(vector<vector<int>>&ans, vector<int>&subset, int i, vector<int>& nums){
        if(i == nums.size()){
            ans.push_back(subset);
            return;
        }
        // if(ans.size() == 0){
        //     ans.push_back(subset);
        // }
        subset.push_back(nums[i]);
        printS(ans, subset, i+1, nums);
        subset.pop_back();
        printS(ans, subset, i+1, nums);
       
    }
};