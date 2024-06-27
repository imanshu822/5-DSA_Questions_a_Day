class Solution {
public:

    void findPath(int i, int n, vector<bool>& cols, vector<bool>& d1, vector<bool>& d2, vector<string>& board, vector<vector<string>>& result){
        if(i == n){
            result.push_back(board);
            return;
        }
        
        for(int j = 0; j < n; j++){
            if(cols[j] || d1[i - j + n - 1] || d2[i+j]){
                continue;
            }
            cols[j] = d1[i - j + n - 1] = d2[i + j] = true;

            board[i][j] = 'Q';

            findPath(i + 1, n, cols, d1, d2, board, result);

            board[i][j] = '.';

            cols[j] = d1[i - j + n - 1] = d2[i + j] = false;
        }

    }

    int totalNQueens(int n) {
        vector<vector<string>> result;
        vector<string> board(n, string(n, '.'));
        vector<bool> cols(n, false);
        vector<bool> d1(2 * n - 1, false);
        vector<bool> d2(2 * n - 1, false);

        findPath(0, n, cols, d1, d2, board, result);

        return result.size();
    }
};