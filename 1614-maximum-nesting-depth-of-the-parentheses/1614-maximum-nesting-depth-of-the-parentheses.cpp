class Solution {
public:
    int maxDepth(string s) {
        int maxi = INT_MIN;
        int count = 0;
        stack<int> st;
        for(int i = 0; i < s.size(); i++){
            char ch = s[i];
            if(ch == '('){
                st.push(ch);
                count++;
            }else if(ch == ')'){
                st.pop();
                ch--;
            }
            maxi = max(maxi, count);
        }
        return maxi;
    }
};