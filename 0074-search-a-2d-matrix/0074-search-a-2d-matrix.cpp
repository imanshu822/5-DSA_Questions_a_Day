class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        int targetRow = row - 1;
        for(int i = 0; i < row-1; i++){
            if(matrix[i][0] <= target && matrix[i+1][0] > target){
                targetRow = i;
                break;
            }
        }
        for(int i = 0; i < col; i++){
            if(matrix[targetRow][i] == target)
                return true;
        }
        return false;
    }
};