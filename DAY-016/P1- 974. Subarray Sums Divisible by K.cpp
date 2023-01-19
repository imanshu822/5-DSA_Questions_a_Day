// Problem Link: https://leetcode.com/problems/subarray-sums-divisible-by-k/description/
// Problem Name: 974. Subarray Sums Divisible by K (LeetCode)
// Solution: accepted Submission

class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int, int> map;
        map[0] = 1;
        int count = 0, sum = 0;
        for (int num : nums) {
            sum += num;
            int remainder = (sum % k + k) % k;
            count += map[remainder];
            map[remainder]++;
        }
    return count;
    }
};
