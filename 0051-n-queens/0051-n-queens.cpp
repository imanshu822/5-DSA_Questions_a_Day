class Solution {
public:
    void distinctSolutions(int i, int n, vector<bool>& cols, vector<bool>& d1, vector<bool>& d2, vector<string>& board, vector<vector<string>>& result){
        if(i == n){
            result.push_back(board);
            return;
        }

        for(int j = 0; j < n; j++){
            if(cols[j] || d1[i - j + n - 1] || d2[i + j]){
                continue;
            }

            board[i][j] = 'Q';
            cols[j] = d1[i - j + n - 1] = d2[i + j] = true;

            distinctSolutions(i + 1, n, cols, d1, d2, board, result);

            board[i][j] = '.';
            cols[j] = d1[i - j + n - 1] = d2[i + j] = false;
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> result;
        vector<string> board(n, string(n, '.'));
        vector<bool> cols(n, false);
        vector<bool> d1(2 * n - 1, false);
        vector<bool> d2(2 * n - 1, false);

        distinctSolutions(0, n, cols, d1, d2, board, result);

        return result;
    }
};
