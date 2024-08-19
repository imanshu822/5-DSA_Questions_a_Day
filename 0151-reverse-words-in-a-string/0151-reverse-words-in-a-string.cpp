class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        string str = "";
        vector<string> v;

        for(int i = 0; i < n; i++){
            if(s[i] != ' '){
                str += s[i];
            }
            if((s[i] == ' ' || i == n-1) && str != ""){
                v.push_back(str);
                str = "";
            }
        }

        string result = "";
        for(int i = v.size() - 1; i >= 0; i--){
            result += v[i];
            if(i != 0){
                result += " ";
            }
        }

        return result;
    }
};