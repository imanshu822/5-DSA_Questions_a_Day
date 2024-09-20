class Solution {
public:
    string shortestPalindrome(string s) {
        const int n = s.size();
        int i = 0;
        for (int j=n-1; j>= 0; j--) {
            while (j>=0 && s[i] == s[j])
                i++, j--;
        }
        if (i==n) //palindrome early stop
            return s;
        string sub= s.substr(i), remain_rev=sub;
        reverse(remain_rev.begin(), remain_rev.end());
        return remain_rev + shortestPalindrome(s.substr(0, i)) + sub;
    }
};




auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 'c';
}();