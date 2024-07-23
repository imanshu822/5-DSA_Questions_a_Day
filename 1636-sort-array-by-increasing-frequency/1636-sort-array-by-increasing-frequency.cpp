class Solution {
public:

    vector<int> frequencySort(vector<int>& nums) {
        int n = nums.size();
        sort(nums.rbegin(), nums.rend());

        map<int, int> umap;

        for(int num : nums){
            umap[num]++;
        }
        vector<pair<int, int>> store;
        for(auto& it: umap){
            store.push_back({it.first, it.second});
        }

        sort(store.begin(), store.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
            if (a.second == b.second)
                return a.first > b.first;
            return a.second < b.second;
        });

        vector<int> res;

        for(int i = 0; i < store.size(); i++){
            while(store[i].second--){
                res.push_back(store[i].first);
            }
        }
        return res;
    }
};