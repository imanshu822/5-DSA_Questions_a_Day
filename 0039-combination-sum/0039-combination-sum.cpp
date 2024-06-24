class Solution {
public:
    vector<vector<int>> ans;

    void findCombination(int idx, int target, vector<int>&arr, vector<int>&ds ){
        if(idx == arr.size()){
            if(target == 0){
                ans.push_back(ds);
            }
            return;
        }

        if(arr[idx] <= target){
            ds.push_back(arr[idx]);
            findCombination(idx, target - arr[idx], arr, ds);
            ds.pop_back();
        }
        findCombination(idx + 1, target, arr, ds);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> ds;
        findCombination(0, target, candidates, ds);
        return ans;
    }
};