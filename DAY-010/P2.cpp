// Problem Link: https://leetcode.com/problems/longest-consecutive-sequence/description/
// Problem Name: 128. Longest Consecutive Sequence (LeetCode)
// Solution: accepted Submission

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int l = nums.size();
        if(l == 0)
            return 0;
        unordered_set<int>uset(nums.begin(), nums.end());
        int res = 1;
        for(auto x : uset){
            if(uset.find(x-1) == uset.end()){
                int curr = 1;
                while(uset.find(x+curr) != uset.end()){
                    curr++;
                }
                res = max(res, curr);
            }
        }
        return res;
    }
};