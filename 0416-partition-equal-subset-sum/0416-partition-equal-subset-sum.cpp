class Solution {
public:
    bool solve(vector<int>& nums, int sum){
        int n = nums.size();
        int dp[n+1][sum+1];
        memset(dp, -1, sizeof(dp));
        for(int col = 0; col < sum+1; col++){
            dp[0][col] = false;
        }
        for(int row = 0; row < n+1; row++){
            dp[row][0] = true;
        }
        for(int i = 1; i < n + 1; i++){
            for(int j = 1; j < sum + 1; j++){
                if(nums[i-1] <= j){
                    dp[i][j] = dp[i-1][j - nums[i-1]] || dp[i-1][j];
                }else{
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
        return dp[n][sum];
    }
    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        int numsSum = 0;
        for(auto x: nums){
            numsSum += x;
        }
        if(numsSum & 1)
            return false;
        int numsHalfSum = numsSum/2;
        return solve(nums, numsHalfSum);
    }
};