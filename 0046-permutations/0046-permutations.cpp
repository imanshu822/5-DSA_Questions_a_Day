class Solution {
public:

    void findPermute(vector<int>& nums, vector<int>& current, vector<vector<int>>& res, vector<bool>& visited){
        if(nums.size() == current.size()){
            res.push_back(current);
            return;
        }

        for(int i = 0; i < nums.size(); i++){
            if(visited[i])
                continue;
            visited[i] = true;
            current.push_back(nums[i]);
            findPermute(nums, current, res, visited);
            current.pop_back();
            visited[i] = false;
        }

    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> current;
        vector<vector<int>> res;
        vector<bool> visited(nums.size(), false);

        findPermute(nums, current, res, visited);
        return res;
    }
};