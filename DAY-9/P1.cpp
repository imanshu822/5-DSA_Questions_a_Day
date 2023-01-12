// Problem Link: https://leetcode.com/problems/subarray-sum-equals-k/description/
// Problem Name: 560. Subarray Sum Equals K (LeetCode)
// Solution: accepted Submission

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
int count = 0, sum = 0;
    unordered_map<int, int> hash_map;
    hash_map[0] = 1;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (hash_map.find(sum - k) != hash_map.end()) {
            count += hash_map[sum - k];
        }
        if (hash_map.find(sum) == hash_map.end()) {
            hash_map[sum] = 1;
        }
        else {
            hash_map[sum]++;
        }
    }
    return count;
    }
};