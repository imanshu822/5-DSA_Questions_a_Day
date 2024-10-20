class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();

        unordered_map<int, int> row;
        unordered_map<int, int> col;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(matrix[i][j] == 0){
                    col[j]++;
                    row[i]++;
                }
            }
        }

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(row.find(i) != row.end() || col.find(j) != col.end()){
                    matrix[i][j] = 0;
                }
            }
        }
    }
};