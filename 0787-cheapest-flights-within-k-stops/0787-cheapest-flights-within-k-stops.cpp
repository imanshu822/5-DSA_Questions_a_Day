class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int K) {
        vector<int> dist(n, INT_MAX);
        dist[src] = 0;
        for(int i = 0; i <= K; i++)
        {
            vector<int> tmp = dist;
            for(const auto& edgeInfo: flights)
            {
                if(dist[edgeInfo[0]] != INT_MAX)
                {
                    tmp[edgeInfo[1]] = min(tmp[edgeInfo[1]], dist[edgeInfo[0]] + edgeInfo[2]);
                }
               
            }
            dist = tmp;
        }
        return dist[dst] == INT_MAX ? -1 : dist[dst];
        
    }
};