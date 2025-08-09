class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int low = 0, high = nums.size() - 1;

        while (low < high) {
            int mid = low + (high - low) / 2;
            
            if (mid % 2 == 1) mid--;

            if (nums[mid] == nums[mid + 1]) {
                // Single element is on the right side
                low = mid + 2;
            } else {
                // Single element is on the left side (including mid)
                high = mid;
            }
        }
        return nums[low];
    }
};
