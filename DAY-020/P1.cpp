// Problem Link: https://leetcode.com/problems/find-the-town-judge/description/
// Problem Name: 997. Find the Town Judge (LeetCode)
// Solution: accepted Submission

class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        unordered_map<int,int> umap1;
        unordered_map<int,int> umap2;

        for(auto t: trust){
            umap1[t[1]]++;
            umap2[t[0]]++;
        }
        for(int i = 1; i <= n; i++){
            if(umap2[i] == 0 && umap1[i] == n-1)
                return i;
        }
        return -1;
    }
};