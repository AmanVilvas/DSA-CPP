class Solution {
public:
bool isAlphaNumeric(char c) {
    return (c >= 'a' && c <= 'z') ||
           (c >= 'A' && c <= 'Z') ||
           (c >= '0' && c <= '9');
}

char toLower(char c) {
    if (c >= 'A' && c <= 'Z')
        return c + 32;
    return c;
}

bool isPalindromeRecursive(const string& s, int left, int right) {
    if (left >= right) return true;
    if (!isAlphaNumeric(s[left]))
        return isPalindromeRecursive(s, left + 1, right);
    if (!isAlphaNumeric(s[right]))
        return isPalindromeRecursive(s, left, right - 1);
    if (toLower(s[left]) != toLower(s[right]))
        return false;
    return isPalindromeRecursive(s, left + 1, right - 1);
}

bool isPalindrome(string s) {
    return isPalindromeRecursive(s, 0, s.length() - 1);
}
};