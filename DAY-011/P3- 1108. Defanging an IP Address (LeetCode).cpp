// Problem Link: https://leetcode.com/problems/defanging-an-ip-address/
// Problem Name: 1108. Defanging an IP Address (LeetCode)
// Solution: accepted Submission

class Solution {
public:
    string defangIPaddr(string address) {
        string ans ="";

        for(char x:address)
        {
            if(x =='.')
               ans = ans + "[.]";
            else
               ans = ans + x; 
        }
        return ans;
    }
};

