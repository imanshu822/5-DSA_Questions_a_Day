// Problem Link: https://leetcode.com/problems/binary-search/description/
// Problem Name: 704. Binary Search (LeetCode)
// Solution: accpeted Submission


class Solution {
public:
    int search(vector<int>& nums, int target) {
        int end = nums.size() - 1;
        int begin = 0;
        while(begin <= end){
            int mid = (begin + end ) / 2;
            if(nums[mid] == target)
                return mid;
            else if(nums[mid] < target)
                begin = mid + 1;
            else 
                end = mid - 1;
        }
        return -1;
    }
};
