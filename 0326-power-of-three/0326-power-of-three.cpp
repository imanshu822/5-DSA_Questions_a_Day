class Solution {
public:
    bool findPowOfThree(int n){
        if(n == 1)
            return true;
        if(n == 0 || n % 3 != 0)
            return false;
        return findPowOfThree(n/3);
    }

    bool isPowerOfThree(int n) {
       if(n <= 0)
        return false;

        return findPowOfThree(n);
    }
};