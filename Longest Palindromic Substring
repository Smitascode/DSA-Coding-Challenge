class Solution {
public:
    // string longestPalindrome(string s) {

string longestPalindrome(string s) {
    int n = s.length();
    if (n < 2) {
        return s;
    }

    int maxLen = 1;
    int start = 0;

    // Create a 2D boolean array to track palindromic substrings
    bool dp[n][n];
    memset(dp, 0, sizeof(dp));

    // All substrings of length 1 are palindromic
    for (int i = 0; i < n; i++) {
        dp[i][i] = true;
    }

    // Check for substrings of length 2
    for (int i = 0; i < n - 1; i++) {
        if (s[i] == s[i + 1]) {
            dp[i][i + 1] = true;
            start = i;
            maxLen = 2;
        }
    }

    // Check for substrings of length greater than 2
    for (int len = 3; len <= n; len++) {
        for (int i = 0; i < n - len + 1; i++) {
            int j = i + len - 1;
            if (s[i] == s[j] && dp[i + 1][j - 1]) {
                dp[i][j] = true;
                start = i;
                maxLen = len;
            }
        }
    }

    return s.substr(start, maxLen);
}


};
