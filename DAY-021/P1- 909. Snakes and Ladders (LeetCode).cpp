// Problem Link: https://leetcode.com/problems/snakes-and-ladders/description/
// Problem Name: 909. Snakes and Ladders (LeetCode)
// Solution: accepted Submission

class Solution {
public:
    int min(int a, int b){
        if(a < b) return a;
        else return b;
    }
    int snakesAndLadders(vector<vector<int>>& board) {
        int n = board.size();
        queue<int> q;
        vector<bool> visited(n*n + 1, false);
        if(board[n-1][0] != -1){
            q.push(board[n-1][0]);
            visited[1] = true;
        } 
        else q.push(1);
        int steps = 0;
        bool done = 0;
        while(!q.empty() && !done){
            int k = q.size();
            while(k--){
                int pos = q.front();
                q.pop();
                if(visited[pos]) continue;
                visited[pos] = true;
                for(int i=pos+1; i < min(pos+7, n*n + 1); i++){
                    
                    if(i == n*n ){
                        done = 1;
                        break;
                    }
                    int a = i/n;
                    if(i % n == 0) a -= 1; 
                    int b = (i - a*n)-1;
                    if(a % 2) b = n-b-1;
                    if(board[n-a-1][b] != -1 && board[n-a-1][b] == n*n){
                        done = true;
                        break;
                    }
                    if(board[n-a-1][b] != -1) q.push(board[n-a-1][b]);
                    else q.push(i);
                }
            }
            steps++;
        }
        if(done) return steps;
        return -1;
    }
};
