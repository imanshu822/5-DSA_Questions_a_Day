// Problem Link: https://leetcode.com/problems/shuffle-string/description/
// Problem Name: 1528. Shuffle String (LeetCode)
// Solution: accepted submission

class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int l = indices.size();
        vector<char> v;
        for(int i = 0; i < l; i++)
        {
            for(int j = 0; j < l; j++)
                if(i == indices[j])
                {
                    char t = s.at(j);
                    v.push_back(t);
                }
        }
        for(int i = 0; i<l; i++)
        {
            s.at(i) = v[i];
        }
        return s;
        
    }
};
