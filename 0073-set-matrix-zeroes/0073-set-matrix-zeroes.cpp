class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        unordered_map<int, int> row;
        unordered_map<int, int> col;
        int m = matrix.size();
        int n = matrix[0].size();
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(matrix[i][j] == 0){
                    row[i]++;
                    col[j]++;
                }
            }
        }
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(row.find(i) != 0 || col.find(j) != 0){
                    matrix[i][j] = 0;
                }
            }
        }
    }
};