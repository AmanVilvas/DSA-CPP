class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // int size = m+n;
       
       for(int i=m,  j=0; j<n; j++){
        nums1[i] = nums2[j];
        i++;
       }
        // nums1.insert(nums1.end(),nums2.begin(),nums2.end());
        sort(nums1.begin(), nums1.end());
        // nums1.erase(remove(nums1.begin(), nums1.end(), 0), nums1.end());
    }
};