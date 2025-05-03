class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";

        string ans = "";

        for (int j = 0; j < strs[0].size(); j++) {
            char current = strs[0][j];

            for (int i = 1; i < strs.size(); i++) {
                // Check if j is out of bounds or character mismatch
                if (j >= strs[i].size() || strs[i][j] != current) {
                    return ans; // Stop immediately if mismatch
                }
            }

            ans += current; // All matched at position j, add to result
        }

        return ans;
    }
};
