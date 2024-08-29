class Solution {
public:    
    unordered_map<short, vector<short>> RC;
    bitset<20003> viz;// bitset is good

    void dfs(short idx) {
        viz[idx]=1;
        for (short k : RC[idx]) {
            if (viz[k]== 0) 
                dfs(k);
        }
    }

    int removeStones(vector<vector<int>>& stones) {
        const int n = stones.size(), M=10001;
        RC.reserve(200);// a guess 
        for (int idx = 0; idx < n; idx++) {
            const int i = stones[idx][0], j=stones[idx][1];
            RC[i].push_back(j+M);
            RC[M+j].push_back(i);
        }
        
        int component=0;
        for (auto& [i, _] : RC) {
            if (viz[i] == 0) { 
                dfs(i); 
                component++;
            }
        }
        return n - component;
    }
};



 
auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 'c';
}();