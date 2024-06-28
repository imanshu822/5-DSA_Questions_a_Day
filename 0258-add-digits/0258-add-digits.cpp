
#include <bits/stdc++.h>

class Solution {
public:

    int digitSum(int n){
        int r = 0;
        while(n > 0){
            r += n % 10;
            n = n / 10;
        }
        return r;
    }
    int addDigits(int n) {
         if(n < 10){
            return n;
        }
        
        n = digitSum(n);
        
        return addDigits(n);
    }
};