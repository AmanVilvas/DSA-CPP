class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> sub;
        solve(candidates, ans, sub, target, 0);
        return ans;
    }
    void solve(vector<int> &arr, vector<vector<int>>& ans, vector<int>& sub, int t, int i){
        int n = arr.size();
        if(t < 0 || i >=n ){
            return;
        }
        if(t == 0){
         ans.push_back(sub);
         return;
        }
            sub.push_back(arr[i]);
            solve(arr, ans, sub, t-arr[i], i);
            sub.pop_back();
        
        solve(arr, ans, sub, t, i+1);
    }
};