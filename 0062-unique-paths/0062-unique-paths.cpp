class Solution {
public:
    int M, N;
    int dp[101][101];
    int solve(int i, int j){
        if(dp[i][j] != -1){
            return dp[i][j];
        }
        if(i == M-1 && j == N-1)
            return 1;
        if(i >= M || i < 0 || j >= N || j < 0)
            return 0;
        int right = solve(i, j+1);
        int down = solve(i+1, j);
        dp[i][j] = right + down;
        return dp[i][j];
    }
    int uniquePaths(int m, int n) {
        M = m, N = n;
        memset(dp, -1, sizeof(dp));
        return solve(0,0);
    }
};