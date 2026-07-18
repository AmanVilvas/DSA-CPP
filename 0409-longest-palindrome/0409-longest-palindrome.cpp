class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> mpp;

        for (char c : s)
            mpp[c]++;

        int count = 0;
        bool odd = false;

        for (auto it : mpp) {
            count += (it.second / 2) * 2;

            if (it.second % 2 == 1)
                odd = true;
        }

        if (odd)
            count++;

        return count;
    }
};