// Problem Link: https://leetcode.com/problems/maximum-value-of-a-string-in-an-array/description/
// Problem Name: 2496. Maximum Value of a String in an Array
// Solution: Accepted sumbission


class Solution {
public:
    int maximumValue(vector<string>& strs) 
    {
        int mx = INT_MIN;
        for(int i=0;i<strs.size();i++){
            string str = strs[i];
            bool flag1 = false;                 
            bool flag2 = false;                
            int tmp = 0;                        
            int n = str.size();  
            for(int i=0;i<n;i++){
                if(str[i]>=97 && str[i]<=122){
                    flag1 = true;
                    if(flag2) break;                        
                }
                else{
                    flag2 = true;
                    if(flag1) break;                
                    tmp = tmp*10 + str[i]-'0';                  
                }
            }
            if(flag1 && flag2){
                mx = max(mx,n);
                cout<<mx<<" ";
            }
            else if(!flag1 && flag2){
                mx = max(mx,tmp);
                cout<<mx<<" ";
            }
            else if(flag1 && !flag2)
            {
                mx = max(mx,n);
                cout<<mx<<" ";
            }
        }
        return mx;
    }
};