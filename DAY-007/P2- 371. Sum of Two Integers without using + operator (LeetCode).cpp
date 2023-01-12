// Problem Link: https://leetcode.com/problems/sum-of-two-integers/description/
// Problem Name: 371. Sum of Two Integers without using + operator (LeetCode)
// Solution: accepted submission

class Solution {
public:
    int getSum(int a, int b) {
        while(a > 0){
            b++;
            a--;
        }
        while(a < 0){
            b--;
            a++;
        }
        return b;
        
    }
};