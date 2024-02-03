class Solution {
public:
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        int n = arr.size();
        vector<int> dp(n+1,0);
        for(int i = 1; i<= n; i++){
            int currMax = -1;
            for(int j = 1; j <= k && i-j >= 0; j++){
                currMax = max(currMax, arr[i-j]);
                dp[i] = max(dp[i], (currMax * j) + dp[i-j]); 
            }
        }
        return dp[n];
    }
};