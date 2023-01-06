// Problem Link: https://leetcode.com/problems/find-the-highest-altitude/description/
// Problem Name: 1732. Find the Highest Altitude
// Solution: accepted submission

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
       int x = 0;
        vector<int>v;
        for(int i = 0; i < gain.size(); i++)
        {
            x = x + gain[i];
            v.push_back(x);
        }

        int max = *max_element(v.begin(),v.end());
        if(max < 0)
            return 0;
        else 
            return max;
    }
};
