class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.size();
        
        for (int sub_len = 1; sub_len <= n / 2; sub_len++) {
            if (n % sub_len == 0) {
                int rep = n / sub_len;
                string p_subString = s.substr(0, sub_len);
                string ans = "";
                
                for (int j = 0; j < rep; j++) {
                    ans += p_subString;
                }
                
                if (ans == s) {
                    return true;
                }
            }
        }
        
        return false;
    }
};

