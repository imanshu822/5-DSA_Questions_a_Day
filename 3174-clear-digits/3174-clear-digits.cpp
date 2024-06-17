class Solution {
public:
    string clearDigits(string s) {
        int n = s.size();
        for(int i = 1; i < n; i++){
            if(!isalpha(s[i])){
                s.erase(i-1, 2);
                i = i - 2;
                n = n - 2;
            }
        }
        return s;
    }
};