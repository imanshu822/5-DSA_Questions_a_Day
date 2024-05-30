class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        if(n == 0)
            return 0;
        int maxLen = 0;
        for(int i = 0; i < n; i++){
            set<int> st;
            for(int j = i; j < n; j++){
                if(st.find(s[j]) != st.end()){
                    break;
                }
                st.insert(s[j]);
                int currLen = st.size();
                maxLen = max(maxLen, currLen);
            }
        }
        return maxLen == 0 ? n : maxLen;
    }
};