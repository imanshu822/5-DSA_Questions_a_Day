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
                }else{
                    st.push(ch);
                }
            }
        }
        int a = 0, b = 0;
        while(!st.empty()){
            if(st.top() == '['){
                a++;
            }else{
                b++;
            }
            st.pop();
        }

        return ((a+1)/2 + (b+1)/2)/2;
    }
};