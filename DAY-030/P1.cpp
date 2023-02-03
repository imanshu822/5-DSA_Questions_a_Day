// Problem Link: https://leetcode.com/problems/zigzag-conversion/description/
// Problem Name: 6. Zigzag Conversion (LeetCode)
// Solution: accepted submission

class Solution {
public:
    string convert(string s, int n) {
        if(n==1)return s;
        string ans="";
        int j;
        int m=s.size();
        for(int i=1;i<=n;i++){
            j=i;
            if(i==1 || i==n){
                while(j<=m){
                    ans+=s[j-1];
                    j=j+2*(n-1); 
                }
            }
            else{
                while(j<=s.size()){
                    ans+=s[j-1];
                    int tm=j;
                    j+=2*(n-i);
                    if(j-1<s.size()) ans+=s[j-1];
                    j=tm+2*(n-1);
                    
                }
            }
        }
        return ans;
    }
};