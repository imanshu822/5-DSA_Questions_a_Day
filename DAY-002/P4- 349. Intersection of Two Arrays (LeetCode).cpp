// Problem Link: https://leetcode.com/problems/intersection-of-two-arrays/description/
// Problem Name: 349. Intersection of Two Arrays (LeetCode)
// Solution: (correct Submission)

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s1, s2, ans;
    unordered_set<int>::iterator it;
    int i, size;
    vector<int> ansVec;
    size = nums1.size();
    for (i = 0; i < size; ++i) {
        s1.insert(nums1[i]);
    }
    size = nums2.size();
    for (i = 0; i < size; ++i) {
        s2.insert(nums2[i]);
    }
    for (it = s1.begin(); it != s1.end(); ++it) {
        if (s2.count(*it) == 1) {
            ans.insert(*it);
        }
    }
    for (it = ans.begin(); it != ans.end(); ++it) {
        ansVec.emplace_back(*it);
    }
    return ansVec;
    }
};
