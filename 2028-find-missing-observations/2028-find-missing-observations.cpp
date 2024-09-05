class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int m = rolls.size();
        int observedSum = accumulate(rolls.begin(), rolls.end(), 0);
        int totalSum = (m+n) * mean;
        
        int missingSum = totalSum - observedSum;
        int temp = missingSum / n;

        if (missingSum < n || missingSum > 6 * n) {
            return {}; 
        }

        vector<int> res(n, missingSum / n);

        int reminder = missingSum % n;

        for(int i = 0; i < reminder; i++){
            res[i]++;
        }

       
        return res;
    }
};