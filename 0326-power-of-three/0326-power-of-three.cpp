class Solution {
public:

    bool checkPow(int n){
        if(n == 1)
            return true;
        if(n == 0 || n  % 3 != 0)
            return false;
        return checkPow(n/3);
    }

    bool isPowerOfThree(int n) {
        if(n <= 0)
            return false;
        return checkPow(n);
    }
};