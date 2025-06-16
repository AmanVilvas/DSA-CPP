class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       if(nums.empty()) return 0;
    
    sort(nums.begin(), nums.end()); 
    int ans = 1;
    int maxi = 1;

    for(int i = 1; i < nums.size(); i++) {
        if(nums[i] == nums[i-1]) {
            
            continue;
        } else if(nums[i] - nums[i-1] == 1) {
            ans++;
        } else {
            maxi = max(maxi, ans);
            ans = 1;
        }
    }

    maxi = max(maxi, ans);
    return maxi;
    }
};