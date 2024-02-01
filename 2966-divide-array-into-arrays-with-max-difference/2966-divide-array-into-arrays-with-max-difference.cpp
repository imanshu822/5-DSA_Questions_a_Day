class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        int n = nums.size();
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n; i = i + 3) {
            ans.push_back({nums[i], nums[i + 1], nums[i + 2]});
        }
        for(int i = 0; i < n/3; i++){
                if(abs(ans[i][0] - ans[i][1]) > k || abs(ans[i][0] - ans[i][2]) > k || abs(ans[i][2] - ans[i][0]) > k)
                    return {};
        }
        return ans;
    }
};