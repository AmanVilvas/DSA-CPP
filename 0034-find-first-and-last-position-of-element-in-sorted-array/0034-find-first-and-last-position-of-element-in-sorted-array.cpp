class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int target) {
        vector<int>ans;
        int low = 0, high = arr.size()-1;
        int first = -1;
        while(low <= high){
            int mid = low + (high-low)/2;
            if(arr[mid] == target){
                 first = mid;
                high = mid - 1;
            }else if (arr[mid] > target){
                high = mid - 1;
            }else {
                low = mid + 1;
            }
        }
            ans.push_back(first);

         low = 0, high = arr.size()-1;
        int last = -1;
        while(low <= high){
            int mid = low + (high-low)/2;
            if(arr[mid] == target){
                last = mid;
                low = mid + 1;
            }else if (arr[mid] > target){
                high = mid - 1;
            }else {
                low = mid + 1;
            }
        }
        ans.push_back(last);

        return ans;

} 
    
};