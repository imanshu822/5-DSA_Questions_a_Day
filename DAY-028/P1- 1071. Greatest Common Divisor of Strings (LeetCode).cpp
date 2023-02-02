// Problem Link: https://leetcode.com/problems/greatest-common-divisor-of-strings/
// Problem Name: 1071. Greatest Common Divisor of Strings (LeetCode)
// Solution: accepted Submission 

class Solution {
public:
    string gcdOfStrings(string str1, string str2) 
    {
        int n = str1.length();
        int m = str2.length();
        if(str1+str2 != str2+str1) return "";
        
        return str1.substr(0,__gcd(n,m));
    }
};
