class Solution {
public:
    int minimumDeletions(string s) {
        stack<char> st;
        int n = s.size();
        int count = 0;

        for(int i = 0; i < n; i++){
            char ch = s[i];
            if(!st.empty() && st.top() == 'b' && ch == 'a'){
                count++;
                st.pop();
            } else {
                st.push(ch);
            }
        }

        return count;
    }
};
