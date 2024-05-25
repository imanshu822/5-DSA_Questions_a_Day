class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> umap;
        for(int num: nums)
            umap[num]++;
        for(auto it = umap.begin(); it != umap.end(); it++){
            if(it->second >= 2)
                return it->first;
        }
        return 0;
    }
};