// Problen Link: https://leetcode.com/problems/count-number-of-pairs-with-absolute-difference-k/
// Problem Name: 2006. Count Number of Pairs With Absolute Difference K (LeetCode)
// Solution: accepted submission

class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int tdiff=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++)
                abs(nums[i]-nums[j])==k?tdiff++:0;
        }
     return tdiff;
    }
};
