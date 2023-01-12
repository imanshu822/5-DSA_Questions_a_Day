// Problem Link: https://leetcode.com/problems/find-numbers-with-even-number-of-digits/description/
// Problem Name: 1295. Find Numbers with Even Number of Digits (LeetCode)
// Solution: accepted submission

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
    for (int i = 0; i< nums.size(); i++)
    {
        int digit = int(log10(nums[i]) + 1);
       if(digit % 2 == 0)
            count++;
    }
    return count;
    }
};

