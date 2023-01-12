// Problem Link: https://leetcode.com/problems/contiguous-array/description/
// Problem Name: 525. Contiguous Array (LeetCode)
// Solution: accepted Submission


class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int> umap;
        int preSum = 0, res = 0;
        umap.insert({0,-1});
        for(int i = 0; i < nums.size(); i++){
            preSum += (nums[i] == 0) ? -1 : 1;
            if(umap.find(preSum) != umap.end()){
                res = max(res , i - umap[preSum]);
            }
            else
                umap.insert({preSum,i});
        }
        return res;
    }
};
