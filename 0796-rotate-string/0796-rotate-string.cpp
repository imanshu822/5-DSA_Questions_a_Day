class Solution {
public:
    bool rotateString(string s, string goal) {
        string str = s;
        string f_char = "";
        int n = s.size();
        for(int i = 0; i < s.size(); i++){
            f_char = str[0];
            str = str.substr(1, (n - 1));

            str += f_char;
            if(str == goal)
                return true;
        }
        return false;
    }
    
};