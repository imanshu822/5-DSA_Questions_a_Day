class Solution {
public:

    void findCombinations(int idx, int target, vector<int>& arr, vector<int>& ds, vector<vector<int>>& ans){
        if(target == 0){
            ans.push_back(ds);
            return;
        }
            
        for(int i = idx; i < arr.size(); i++){
            if(i > idx && arr[i-1] == arr[i])
                continue;
            if(arr[i] > target)
                break;
            ds.push_back(arr[i]);
            findCombinations(i + 1, target - arr[i], arr, ds, ans);
            ds.pop_back();
        }


    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        int n = candidates.size();

        sort(candidates.begin(), candidates.end());
        vector<int> ds;
        vector<vector<int>> ans;

        findCombinations(0, target, candidates, ds, ans);
        return ans;
    }
};