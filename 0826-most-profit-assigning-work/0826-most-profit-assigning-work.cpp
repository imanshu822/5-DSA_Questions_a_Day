class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        int dSize = difficulty.size();
        int pSize = dSize;
        int wSize = worker.size();
        int res = 0;
        for(int i = 0; i < wSize; i++){
            int currProfit = 0;
            for(int j = 0; j < dSize; j++){
                if(difficulty[j] <= worker[i]){
                    currProfit = max(currProfit, profit[j]);
                }
            }
            res += currProfit;
        }
        return res;
    }
};