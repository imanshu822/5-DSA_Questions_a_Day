class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        set<int> rowSet;
        set<int> colSet;

        for(int i = 0; i < matrix.size(); i++){
            for(int j = 0; j < matrix[0].size(); j++){
                if(matrix[i][j] == 0){
                    rowSet.insert(i);
                    colSet.insert(j);
                }
            }
        }
        for(int i = 0; i < matrix.size(); i++){
            for(int j = 0; j < matrix[0].size(); j++){
                if(rowSet.find(i) != rowSet.end() || colSet.find(j) != colSet.end()){
                    matrix[i][j] = 0;
                }
            }
        }
    }
};