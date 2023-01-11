// Problem Link: https://leetcode.com/problems/count-equal-and-divisible-pairs-in-an-array/description/
// Problem Name: 2176. Count Equal and Divisible Pairs in an Array(LeetCode)
// Solution: accepted submission

class Solution {
public:
    int countPairs(vector<int>& nums, int k) {
        int l = nums.size();
        int count = 0;
        for(int i = 0; i < l; i++)
        {
            for(int j = i+1; j < l; j++)
            {
                if(nums[i] == nums[j] && (i * j) % k == 0)
                    count++;  
            }
        }
        return count;
    }
};
