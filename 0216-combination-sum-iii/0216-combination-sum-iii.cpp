class Solution {
public:
        vector<vector<int>> ans;
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> sub;
        helper(k, n, 1, sub);
        return ans;
    }
    void helper(int k, int n, int ind, vector<int> sub){
        if(n == 0 && k == 0){
            ans.push_back(sub);
            return;
        }
        for(int i = ind; i<= 9; i++){
            if(i>n || k<=0) break;
            sub.push_back(i);
            helper(k-1, n-i, i + 1, sub);
            sub.pop_back();
        }
    }
};