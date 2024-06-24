class Solution {
public:

    vector<int> removeDuplicates(vector<int>& candidates){
        vector<int> res;
        unordered_map<int, int> umap;
        for(int it: candidates){
            umap[it]++;
        }
        for(auto it = umap.begin(); it != umap.end(); it++){
            res.push_back(it->first);
        }
        return res;
    }

    void findCombination(int idx, int target, vector<int>& arr, vector<vector<int>>& ans, vector<int>& ds){
        if(target == 0){
            ans.push_back(ds);
            return;
        }
        for(int i = idx; i < arr.size(); i++){
            if(i > idx && arr[i] == arr[i-1]) continue; // skip duplicates
            if(arr[i] > target) break;
            ds.push_back(arr[i]);
            findCombination(i + 1, target - arr[i], arr, ans, ds);
            ds.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> ans;
        vector<int> ds;
        findCombination(0, target, candidates, ans, ds);
        return ans;
    }
};
