class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> st;
        vector<vector<int>> res;

        for(int i = 0; i < nums.size(); i++){
            for(int j = i + 1; j < nums.size(); j++){
                for(int k = j + 1; k < nums.size(); k++){
                    if(nums[i] + nums[j] + nums[k] == 0){
                        vector<int> temp = {nums[i], nums[j], nums[k]};
                        sort(temp.begin(), temp.end());
                        st.insert(temp);
                    }
                }
            }
        }

        for(auto & vec : st){
            res.push_back(vec);
        }
        return res;
    }
};