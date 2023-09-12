class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        sort(pairs.begin(), pairs.end(), [](const vector<int>& a, const vector<int>& b) {
            return a[1] < b[1];
        });

        int count = 1;
        int prevEnd = pairs[0][1];  
        for (int i = 1; i < pairs.size(); i++) {
            if (pairs[i][0] > prevEnd) {
                count++;
                prevEnd = pairs[i][1];  
            }
        }
        return count;
    }
};
