class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        queue<pair<pair<int, int>, int>> q;
        vector<vector<int>> visited(n, vector<int>(m, 0));

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(grid[i][j] == 2) {
                    q.push({{i, j}, 0});
                    visited[i][j] = 1;
                }
            }
        }

        int timeElapsed = 0;
        int directions[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

        while(!q.empty()) {
            int currentI = q.front().first.first;
            int currentJ = q.front().first.second;
            int currentTime = q.front().second;
            q.pop();

            for(auto dir : directions) {
                int ni = currentI + dir[0];
                int nj = currentJ + dir[1];

                if(ni >= 0 && ni < n && nj >= 0 && nj < m && grid[ni][nj] == 1 && visited[ni][nj] == 0) {
                    grid[ni][nj] = 2;
                    visited[ni][nj] = 1;
                    q.push({{ni, nj}, currentTime + 1});
                    timeElapsed = max(timeElapsed, currentTime + 1);
                }
            }
        }

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(grid[i][j] == 1) {
                    return -1;
                }
            }
        }

        return timeElapsed;
    }
};
