class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int n = prices.size();
       int maxProfit = 0;
       int startDay = prices[0];
       for(int i = 0; i < n; i++){
            if(prices[i] < startDay)
                startDay = prices[i];
            maxProfit = max(maxProfit, prices[i] - startDay);
        
       }
       return maxProfit;
    }
};