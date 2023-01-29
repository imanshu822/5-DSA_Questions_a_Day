// Problem Link: https://leetcode.com/problems/height-checker/description/
// Problem Name: 1051. Height Checker (LeetCode)
// Solution: accepted submission

class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>v ;
        v = heights;
        sort(v.begin(),v.end());
        int count = 0;
        for(int i = 0; i < heights.size(); i++){
            if(v[i] != heights[i])
                count++;
        }
        return count;
    }
};