class Solution {
public:

    bool isValid(vector<vector<char>>& board, int row, int col, char c){
        for(int i = 0; i < 9; i++){
            if(board[row][i] == c && i != row){
                return false;
            }
            if(board[i][col] == c && i != col){
                return false;
            }
            if(board[3 * (row / 3) + i / 3][3 * (col / 3) + i % 3] == c)
                return false;
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        int n = board.size();
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                char c = board[i][j];
                if(c != '.'){
                    board[i][j] = '.';
                    if(!isValid(board, i, j, c)) {
                        return false;
                    }
                    board[i][j] = c;
                }
            }
        }
        return true;
    }
};