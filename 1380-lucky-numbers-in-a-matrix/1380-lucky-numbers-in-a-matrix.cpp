class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
        vector<int> rowMin(m, INT_MAX);
        vector<int> colMax(n, INT_MIN);

        // Finding the minimum in each row
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                rowMin[i] = min(rowMin[i], matrix[i][j]);
            }
        }

        // Finding the maximum in each column
        for(int j = 0; j < n; j++){
            for(int i = 0; i < m; i++){
                colMax[j] = max(colMax[j], matrix[i][j]);
            }
        }

        // Finding lucky numbers
        vector<int> ans;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(matrix[i][j] == rowMin[i] && matrix[i][j] == colMax[j]){
                    ans.push_back(matrix[i][j]);
                }
            }
        }
        return ans;
    }
};
