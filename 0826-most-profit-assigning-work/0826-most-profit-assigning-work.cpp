class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        int n = difficulty.size();
        int m = worker.size();

        priority_queue<pair<int, int>> pq;

        for(int i = 0; i < n; i++){
            int diff = difficulty[i];
            int prof = profit[i];

            pq.push({prof, diff});
        }
        
        sort(begin(worker), end(worker), greater<int>());

        int res = 0;
        int i = 0;
        while(i < m && !pq.empty()){
            if(pq.top().second > worker[i]){
                pq.pop();
            }else{
                res += pq.top().first;
                i++;
            }
        }
        return res;
    }
};