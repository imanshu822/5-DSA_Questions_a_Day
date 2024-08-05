class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        int n = arr.size();
        unordered_map<string, int> umap;
        for(auto str : arr){
            umap[str]++;
        }
        string result = "";
        for(int i = 0; i < n; i++){
            if(umap[arr[i]] == 1){
                k--;
            }
            if(k == 0){
                result = arr[i];
                break;
            }
        }
        return result;
    }
};