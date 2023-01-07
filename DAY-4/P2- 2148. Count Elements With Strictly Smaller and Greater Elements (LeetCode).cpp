// Problem Link: https://leetcode.com/problems/count-elements-with-strictly-smaller-and-greater-elements/description/
// Problem Name: 2148. Count Elements With Strictly Smaller and Greater Elements (LeetCode)
// Solution: accepted Submission

class Solution {
public:
    int countElements(vector<int>& nums) {
        int max = *max_element(nums.begin(), nums.end()); 
        int min = *min_element(nums.begin(), nums.end()); 
        int count = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > min && nums[i] < max) 
            count++;
        }
        return count;
    }
};
