// Problem Link: https://leetcode.com/problems/jewels-and-stones/description/
// Problem Name: 771. Jewels and Stones (LeetCode)
// Solution: accepted Submission

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int ans = 0;
        for(int i = 0; i < jewels.size(); i++){
            ans += count(stones.begin(), stones.end(), jewels[i]);
        }
        return ans;
    }
};
