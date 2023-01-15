// Problem Link: https://leetcode.com/contest/biweekly-contest-95/problems/categorize-box-according-to-criteria/
// Problem Name: 2525. Categorize Box According to Criteria (LeetCode)
// Solution: accepted Submission

class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass) {
        long long int vol = 1LL*length*height*width; 
        int val = max (max(length,width), height);
        if (mass >= 100 && (val >= 10000 || vol >= 1000000000 ))
            return "Both";
        if(mass < 100 && ! (val >= 10000 || vol >= 1000000000)) 
            return "Neither";
        if(mass >= 100) 
            return "Heavy";
        return "Bulky";
    }
};