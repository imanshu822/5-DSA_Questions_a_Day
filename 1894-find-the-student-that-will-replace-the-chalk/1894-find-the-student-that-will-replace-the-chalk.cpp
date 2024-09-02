class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        int n = chalk.size();
        long long sum = accumulate(chalk.begin(), chalk.end(), 0LL);

        int rem = k % sum;

        int idx = 0;

        for(int i = 0; i < n; i++){
            if(chalk[i] > rem){
                return i;
            }
            rem -= chalk[i];
        }
        return idx;
    }
};