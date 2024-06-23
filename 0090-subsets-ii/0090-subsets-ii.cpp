class Solution {
public:
    vector<vector<int>> result;

    void findSubsets(vector<int>& nums, int n, int index, vector<int> curr){
        result.push_back(curr);

        for (int i = index; i < n; ++i) {
            if (i > index && nums[i] == nums[i - 1])
                continue;

            curr.push_back(nums[i]);
            findSubsets(nums, n, i + 1, curr);
            curr.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        findSubsets(nums, n, 0, {});
        return result;
    }
};