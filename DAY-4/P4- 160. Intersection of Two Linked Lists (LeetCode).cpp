// Problem Link: https://leetcode.com/problems/intersection-of-two-arrays-ii/description/
// Problem Name: 160. Intersection of Two Linked Lists (LeetCode)
// Solution: accpted submission

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> umap;
        for(int i = 0; i < nums1.size(); i++){
            umap[nums[i]]++;
        }
        vector<int>v;
        for(int i = 0; i < nums2.size(); i++){
            if(umap.find(nums[i]) != nums)
        }
    }
};
