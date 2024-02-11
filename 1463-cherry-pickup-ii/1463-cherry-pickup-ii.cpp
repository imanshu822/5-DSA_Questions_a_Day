class Solution {
public:
    int m,n;
    int dp[71][71][71];
    int solve(vector<vector<int>> & grid, int row, int c1, int c2){
        if(row >= m)
            return 0;

        if(dp[row][c1][c2] != -1)
            return dp[row][c1][c2];

        int cherry = grid[row][c1];
        if(c1 != c2){
            cherry += grid[row][c2];
        }

        int answer = 0;
        for(int i = -1; i <= 1; i++){
            for(int j = -1; j <= 1; j++){
                int newRow = row+1;
                int newC1 = c1 + i;
                int newC2 = c2 + j;
                if(newC1 >= 0 && newC1 <= n-1 && newC2 >= 0 && newC2 <= n-1){
                answer = max(answer, solve(grid, newRow, newC1, newC2));
                }
            }
        }
        return dp[row][c1][c2] = cherry + answer;
    }

    int cherryPickup(vector<vector<int>>& grid) {
       m = grid.size();
       n = grid[0].size();
       memset(dp, -1, sizeof(dp));
       return solve(grid, 0, 0, n-1); 
    }
};