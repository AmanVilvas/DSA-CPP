class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int low = 0, high = nums.size();
        if(nums.size() == 1){return 0;}
        if(nums[low] > nums[low+1]){return low;}
        if(nums[high-1] > nums[high-2]){return high-1;}

        while(low <= high){
            int mid = low + (high - low)/2;

            if(nums[mid] > nums[mid+1] && nums[mid] > nums[mid-1]){
                return mid;
            } else if(nums[mid] < nums[mid-1]){
                high = mid + 1;
            } else{
                low = mid - 1;
            }
        }
        return -1;
    }

};