class Solution {
public:
    int dp[10001];
    int solve(int n){
        if(n == 0)
            return 0;
        if(dp[n] != -1)
            return dp[n];
        int minCount = INT_MAX;
        for(int i = 1; i * i <= n; i++){
            int result = 1 + solve(n - i * i);
            minCount = min(minCount , result);
        }
        dp[n] = minCount;
        return minCount;
    }
    int numSquares(int n) {
        memset(dp, -1, sizeof(dp));
        dp[0] = 0;
        return solve(n);
    }
};