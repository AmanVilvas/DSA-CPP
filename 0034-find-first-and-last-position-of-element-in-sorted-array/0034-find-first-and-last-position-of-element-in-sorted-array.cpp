class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int target) {
        int low = 0, high = arr.size() - 1; 
        int first = -1, sec = -1;

        //first occ
        first = binaryLeft(arr, 0, arr.size() - 1, target);

        // if first is found
        if (first != -1) {
            sec = binaryRight(arr, first, arr.size() - 1, target);
        }

        return {first, sec};
    }

private:
    int binaryLeft(vector<int>& arr, int l, int h, int x) {
        int first = -1;
        while (l <= h) {
            int mid = l + (h - l) / 2;
            if (arr[mid] == x) {
                first = mid;
                h = mid - 1; // search left
            } else if (arr[mid] < x) {
                l = mid + 1;
            } else {
                h = mid - 1;
            }
        }
        return first;
    }

    int binaryRight(vector<int>& arr, int l, int h, int x) {
        int sec = -1;
        while (l <= h) {
            int mid = l + (h - l) / 2;
            if (arr[mid] == x) {
                sec = mid;
                l = mid + 1; // search  right
            } else if (arr[mid] < x) {
                l = mid + 1;
            } else {
                h = mid - 1;
            }
        }
        return sec;
    }
};
