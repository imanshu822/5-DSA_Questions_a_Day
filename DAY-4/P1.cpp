// Problem Link: https://leetcode.com/problems/keep-multiplying-found-values-by-two/description/
// Problem Name: 2154. Keep Multiplying Found Values by Two (LeetCode)
// Solution: accepted Submission

class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        set<int> s;
        for(int i = 0; i < nums.size(); i++){
            int t = nums[i];
            s.insert(t);
        }
        while(s.find(original) != s.end()){
            auto it = s.find(original);
            original = original * 2;
            s.erase(it);
        }
        return original;
    }
};