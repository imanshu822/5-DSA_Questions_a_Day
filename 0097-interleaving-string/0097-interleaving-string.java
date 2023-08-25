class Solution {
    public boolean isInterleave(String s1, String s2, String s3) {
        Integer[][] dp = new Integer[101][101];
        System.gc();
        return solve(s1, s2, s3, 0, 0, 0, dp) == 1 ? true : false;
    }
    private int solve(String s1, String s2, String s3, int i, int j, int k , Integer[][] dp) {
        if(i == s1.length() && j == s2.length() && k == s3.length()) {
            return 1;
        }
        if(k == s3.length()) {
            return 0;
        }
        if(dp[i][j] != null) {
            return dp[i][j];
        }
        int result = 0;
        if(i < s1.length() && s1.charAt(i) == s3.charAt(k)) {
            result = solve(s1, s2, s3, i + 1, j, k + 1, dp);
        }
        if(result == 1) return result;
        if(j < s2.length() && s2.charAt(j) == s3.charAt(k)) {
            result = solve(s1, s2, s3, i, j + 1, k + 1, dp);
        }
        return dp[i][j] = result;
    }
}