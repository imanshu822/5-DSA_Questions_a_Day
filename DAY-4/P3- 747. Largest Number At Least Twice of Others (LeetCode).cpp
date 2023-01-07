// Problem Link: https://leetcode.com/problems/largest-number-at-least-twice-of-others/description/
// Problem Name: 747. Largest Number At Least Twice of Others (LeetCode)
// Solution: accepted Submission 

class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        vector<int> v;
        v = nums;
        sort(nums.begin(), nums.end());
        int l = nums.size();
        if(nums[l-1] >= (2 * nums[l-2])){
            for(int i = 0;i < l; i++){
                if(nums[l-1] == v[i])
                    return i;
            }
        }
        return -1;
    }
};
