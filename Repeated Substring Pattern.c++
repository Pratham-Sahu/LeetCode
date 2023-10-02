class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.length();
        for (int len = 1; len <= n / 2; len++) {
        if (n % len != 0)
            continue;
        string substring = s.substr(0, len);
        string constructedString;
        for (int i = 0; i < n / len; i++) {
            constructedString += substring;
        }
        if (constructedString == s) {
            return true;
        }
    }
    return false;
    }
};
