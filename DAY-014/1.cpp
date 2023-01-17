// Problem Link: https://leetcode.com/problems/flip-string-to-monotone-increasing/description/
// Problem Name: 926. Flip String to Monotone Increasing (LeetCode)
// Solution: accepted Submission

class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int count_flip = 0;
        int count_one = 0;
        for(int x:s){
            if(x == '1'){
                count_one++;
            }
            else{
                count_flip++;
                count_flip = min(count_flip, count_one);
            }
        }
        return count_flip;
    }
};