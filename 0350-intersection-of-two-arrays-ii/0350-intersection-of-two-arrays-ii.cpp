class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> umap;
        vector<int> result;

        for (int it : nums1) {
            umap[it]++;
        }

        for (int it : nums2) {
            if (umap[it] > 0) {
                result.push_back(it);
                umap[it]--;
            }
        }

        return result;
    }
};