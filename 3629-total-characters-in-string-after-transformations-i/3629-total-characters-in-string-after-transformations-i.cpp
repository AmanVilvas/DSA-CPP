class Solution {
public:
    int lengthAfterTransformations(string s, int t) {
        long long mod = 1e9 + 7;
        vector<long long> counts(26, 0);
        for (char c : s) {
            counts[c - 'a']++;
        }

        for (int k = 0; k < t; ++k) {
            vector<long long> next_counts(26, 0);
            for (int i = 0; i < 26; ++i) {
                if (counts[i] > 0) {
                    if (i == 25) { // 'z'
                        next_counts[0] = (next_counts[0] + counts[i]) % mod;
                        next_counts[1] = (next_counts[1] + counts[i]) % mod;
                    } else {
                        next_counts[i + 1] = (next_counts[i + 1] + counts[i]) % mod;
                    }
                }
            }
            counts = next_counts;
        }

        long long total_length = 0;
        for (long long count : counts) {
            total_length = (total_length + count) % mod;
        }
        return (int)total_length;
    }
};