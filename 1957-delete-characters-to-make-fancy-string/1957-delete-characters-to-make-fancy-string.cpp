class Solution {
public:
    string makeFancyString(string s) {
        int n = s.size();
        int count = 1;
        string ans = "";
        ans += s[0];
        for(int i = 1; i < n; i++){
            if(s[i] == s[i-1]){
                if(count < 2){
                    ans += s[i];
                    count++;
                }
                
            }else if(s[i] != s[i-1]){
               ans += s[i];
               count = 1;
            }
        }
        return ans;
    }
};