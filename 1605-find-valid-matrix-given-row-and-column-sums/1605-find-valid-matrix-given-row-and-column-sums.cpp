class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {
        int m = rowSum.size();
        int n = colSum.size();
        vector<vector<int>> result(m, vector<int> (n));

        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                int minVal = min(rowSum[i], colSum[j]);
                result[i][j] = minVal;
                rowSum[i] -= minVal;
                colSum[j] -= minVal;
            }
        }
        return result;
    }
};