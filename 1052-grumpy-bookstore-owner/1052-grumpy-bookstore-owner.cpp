class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int n = customers.size();
        int unsatesfied = 0;
        for(int i = 0; i < minutes; i++){
            if(grumpy[i] == 1){
                unsatesfied += customers[i];
            }
        }
        int maxUnsatesfied = unsatesfied;
        int i = 0;
        int j = minutes;
        while(j < n){
            if(grumpy[j] == 1){
                unsatesfied += customers[j];
            }
            if(grumpy[i] == 1){
                unsatesfied -= customers[i];
            }
            i++; j++;
            maxUnsatesfied = max(unsatesfied, maxUnsatesfied);
        }
        int total = maxUnsatesfied;
        for(int i = 0; i < n; i++){
            if(grumpy[i] == 0){
                total += customers[i];
            }
        }
        return total;
    }
};