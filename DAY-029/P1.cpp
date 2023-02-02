// Problem Link: https://leetcode.com/problems/verifying-an-alien-dictionary/
// Problem Name: 953. Verifying an Alien Dictionary (LeetCode)
// Solution: accepted submission


class Solution {
public:
    bool isAlienSorted(vector<string> words, string order) {
        int mapping[26];
        for (int i = 0; i < 26; i++)
            mapping[order[i] - 'a'] = i;
        for (string &w : words)
            for (char &c : w)
                c = mapping[c - 'a'];
        return is_sorted(words.begin(), words.end());
    }
};