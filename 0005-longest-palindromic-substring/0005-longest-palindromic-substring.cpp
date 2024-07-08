class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        if (n == 0) return "";
        
        vector<vector<bool>> dp(n, vector<bool>(n, false));
        int maxLength = 1; // Every single character is a palindrome
        int start = 0;
        
        // All substrings of length 1 are palindromes
        for (int i = 0; i < n; ++i) {
            dp[i][i] = true;
        }
        
        // Check for substring of length 2
        for (int i = 0; i < n - 1; ++i) {
            if (s[i] == s[i + 1]) {
                dp[i][i + 1] = true;
                start = i;
                maxLength = 2;
            }
        }
        
        // Check for lengths greater than 2
        for (int len = 3; len <= n; ++len) {
            for (int i = 0; i < n - len + 1; ++i) {
                int j = i + len - 1;
                
                // Check if the current substring is a palindrome
                if (dp[i + 1][j - 1] && s[i] == s[j]) {
                    dp[i][j] = true;
                    
                    if (len > maxLength) {
                        start = i;
                        maxLength = len;
                    }
                }
            }
        }
        
        return s.substr(start, maxLength);
    }
};
