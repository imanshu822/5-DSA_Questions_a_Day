// Problem Link: https://leetcode.com/problems/count-odd-numbers-in-an-interval-range/description/
// Problem Name: 1523. Count Odd Numbers in an Interval Range
// Solution: accepted submission

class Solution {
public:

    int countOdds(int low, int high) {
        
     return (high + 1) / 2 - (low / 2);

    }
};