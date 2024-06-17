class Solution {
public:
    bool judgeSquareSum(int c) {
        if(c == 2) 
            return true;
        if(c == 1)
            return true;
        int i = 0;
        int j = c / 2+1;
        while(i <= j){
            long long prod = (i * i) + (j * j);
            if(c == prod){
                return true;
            }
            if(prod > c){
                j--;
            }else{
                i++;
            }
        }
        return false;
    }
};