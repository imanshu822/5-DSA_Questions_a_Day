class Solution {
public:
    int minSwaps(string s) {
        stack<char> st;

        for(int i = 0; i < s.size(); i++){
            char ch = s[i];

            if(ch == '['){
                st.push(ch);
            }else{
                if(!st.empty() && st.top() == '['){
                    st.pop();
                }
            }
        }
       

        return (st.size()+1)/2;
    }
};