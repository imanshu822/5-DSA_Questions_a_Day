// Problem Link: https://leetcode.com/problems/number-of-good-pairs/description/
// Problem Name: 1512. Number of Good Pairs
// Solution: accepted submission

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
    int count=0;

    for(int i=0;i<nums.size();i++)
    for(int j=1;j<nums.size();j++)
    if(nums[i]==nums[j] && i<j)
    count=count+1;
    return count;
    }
};