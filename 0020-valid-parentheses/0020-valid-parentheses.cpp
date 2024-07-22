class Solution {
public:
    bool isCorrectClosingBracket(char top, char ch){
        if(top == '(' && ch == ')')
            return true;
        if(top == '{' && ch == '}')
            return true;
        if(top == '[' && ch == ']')
            return true;
        return false;
    }
    bool isValid(string s) {
        stack<int> st;
        int n = s.size();

        for(int i = 0; i < n; i++){
            char ch = s[i];
            if(ch == '(' || ch == '{' || ch == '['){
                st.push(ch);
            }else if(!st.empty() && isCorrectClosingBracket(st.top(), ch)){
                st.pop();
            }else{
                return false;
            }
        }
        if(st.empty()){
            return true;
        }
        return false;
    }
};