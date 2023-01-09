// Problem Link: https://leetcode.com/problems/check-if-all-characters-have-equal-number-of-occurrences/description/
// Problem Name: 1941. Check if All Characters Have Equal Number of Occurrences (LeetCode)
// Solution: accepted submission

class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int> um;
        int count = 0;
        int i = 0;
        while(s[i] != '\0'){
             um[s[i]]++;
            i++;
        }
        int val = um[s[0]];
        for(auto it = um.begin(); it != um.end(); it++){
            if(it->second  != val)
                return false;
        }
        return true;
    }
};
