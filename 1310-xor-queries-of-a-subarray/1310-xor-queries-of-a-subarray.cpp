class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int n = queries.size();

        vector<int> ans;
        
        for(int i = 0; i < n; i++){
            int j = queries[i][0];
            int k = queries[i][1];
            int temp = arr[j];
            for(int l = j + 1; l <= k; l++){
                temp ^= arr[l];
            }
            ans.push_back(temp);
        }
        return ans;
    }
};