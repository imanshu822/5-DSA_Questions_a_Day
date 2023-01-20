// Problem Link: https://leetcode.com/problems/non-decreasing-subsequences/description/
// Problem Name: 491. Non-decreasing Subsequences (LeetCode)
// Solution: accepted submission

class Solution {
public:
    set<vector<int>> res;
    vector<int> temp;
    void backtrack(vector<int> &nums, int index){
        if(index == nums.size()){
            if(temp.size() >= 2)
                res.insert(temp);
            return;
        }
        if(temp.empty() || temp.back() <= nums[index]){
            temp.push_back(nums[index]);
            backtrack(nums, index + 1);
            temp.pop_back();
        }
        backtrack(nums, index + 1);
    }
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        int index = 0;
        backtrack(nums,index);
        return vector(res.begin(), res.end());
    }
};
