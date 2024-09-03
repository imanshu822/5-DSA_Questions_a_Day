class Solution {
public:
    int strStr(string haystack, string needle) {
        int m = haystack.size();
        int n = needle.size();

        if(n == 0) return 0;

        int i = 0, j = 0;
        while(i < m){
            if(haystack[i] == needle[j]){
                i++;
                j++;
                if(j == n){
                    return i - n;
                }
            }else{
                i = i - j + 1;
                j = 0;
            }
        }
        return -1;
    }
};