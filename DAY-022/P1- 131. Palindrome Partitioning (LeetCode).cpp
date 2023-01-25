// Problem Link: https://leetcode.com/problems/palindrome-partitioning/description/
// Problem Name: 131. Palindrome Partitioning (LeetCode)
// Solution: accepted submission

class Solution {
public:
    bool isPalindrome(string& s, int start, int end) {
    while (start < end) {
        if (s[start++] != s[end--]) return false;
    }
    return true;
}
    void dfs(vector<vector<string>>& res, vector<string>& path, string& s, int start) {
    if (start == s.size()) {
        res.push_back(path);
        return;
    }
    for (int i = start; i < s.size(); i++) {
        if (isPalindrome(s, start, i)) {
            path.push_back(s.substr(start, i - start + 1));
            dfs(res, path, s, i + 1);
            path.pop_back();
        }
    }
}
    vector<vector<string>> partition(string s) {
        vector<vector<string>> res;
        vector<string> path;
        dfs(res, path, s, 0);
    return res;
    }
};
