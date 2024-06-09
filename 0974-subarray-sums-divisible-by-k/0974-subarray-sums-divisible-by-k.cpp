class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n = nums.size();
        int result = 0;
        int sum = 0;
        unordered_map<int, int> umap;
        int rem = 0;
        umap[0] = 1;
        for(int i = 0; i < n; i++){
            sum += nums[i];
            int rem = sum % k < 0 ? (k - (sum % k)) : sum % k;
            if(umap.find(rem) != umap.end()){
                result += umap[rem];
                umap[rem]++;
            }else if(umap.find(rem) == umap.end()){
                umap[rem]++;
            }

        }
        return result;
    }
};