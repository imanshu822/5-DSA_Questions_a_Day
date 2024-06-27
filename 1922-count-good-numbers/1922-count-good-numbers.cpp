#include <cmath>

class Solution {
public:
    const int MOD = 1e9 + 7;

    long long modPow(long long base, long exp){
        if(exp == 0)
            return 1;
        long long ans = modPow(base, exp/2);
        ans *= ans;
        ans = ans % MOD;

        if(exp % 2 == 1){
            ans *= base;
            ans = ans % MOD;
        }


        return ans;
    }

    int countGoodNumbers(long long n) {
        long long e = (n + 1) / 2;
        long long o = n / 2;
        long long ans = (modPow(5, e) * modPow(4, o)) % MOD;
        return ans;
    }
};