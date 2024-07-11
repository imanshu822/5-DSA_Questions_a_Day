class Solution {
public:
    string reverseParentheses(string s) {
        stack<int> lastSkipedLenght;
        string result;
        for(auto& ch: s){
            if(ch == '('){
                lastSkipedLenght.push(result.length());
            }else if(ch == ')'){
               int l = lastSkipedLenght.top();
                lastSkipedLenght.pop();
                reverse(result.begin() + l, result.end());
            }else{
                result.push_back(ch);
            }
        }
        return result;
    }
};