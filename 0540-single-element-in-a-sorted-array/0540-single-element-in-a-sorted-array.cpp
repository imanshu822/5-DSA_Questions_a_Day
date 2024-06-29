class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        unordered_map<int, int> umap;
        for(int it: nums){
            umap[it]++;
        }
        for(auto& it: umap){
            if(it.second == 1)
                return it.first;
        }
        return -1;
    }
};