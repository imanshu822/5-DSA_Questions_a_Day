class Solution {
public:
    const unsigned int MOD = 1000000007;
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int> store;
        for(int i = 0; i < n; i++){
            int temp = 0;
            for(int j = i; j < n; j++){
                temp += nums[j];
                store.push_back(temp);
            }
        }

        sort(store.begin(), store.end());
        long long res = 0; 
        for(int i = left - 1; i < right; i++){
            res = (res + store[i]) % MOD;
        }

        return static_cast<int>(res); 
    }
};