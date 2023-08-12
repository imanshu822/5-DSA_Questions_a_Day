class Solution {
public:
    string reverseWords(string s) {
        vector<string> v;
        string str = "";
        for(int i = 0; i < s.size(); i++) {
            if(s[i] != ' ')
                str += s[i];
            else if (!str.empty()) {  
                v.push_back(str);
                str = "";
            }
        }
        if (!str.empty()) {
            v.push_back(str);
        }
        string ans = "";
        for(int i = v.size() - 1; i >= 0; i--) {
            ans += v[i];
            if (i > 0)
                ans += " ";
        }
        return ans;
    }
};
