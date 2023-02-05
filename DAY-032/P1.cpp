// Problem Link: https://leetcode.com/problems/find-all-anagrams-in-a-string/description/
// Problem Name: 438. Find All Anagrams in a String (LeetCode)
// Solution: accepted submission


class Solution {
public:
    vector<int> findAnagrams(string s2, string s1) {
        int n1=s1.length();
        int n2=s2.length();
        vector<int>ans;
        int v1[26]={0};
        for(auto &it : s1) v1[it-'a']++;
        for(int l = 0; l < n2-n1+1; ++l){
            int v2[26]={0};
            int flag=1;
        for(int r = l; r < l+n1; ++r) 
            v2[s2[r]-'a']++;
        for(int i = 0; i < 26; ++i){
            if(v2[i] != v1[i]){
            flag=0;
           continue;
            } 
        }
        if(flag == 1) 
            ans.push_back(l);
        }
    return ans;
    }
};
       