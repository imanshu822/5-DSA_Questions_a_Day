class Solution {
public:
    int trap(vector<int>& arr) {
        int n = arr.size();
        int res = 0;
        for(int i = 0; i < n; i++){
            int lmax = arr[i];
            for(int j = 0; j < i; j++){
                lmax = max(lmax, arr[j]);
            }
            int rmax = arr[i];
            for(int j = i+1; j < n; j++){
                rmax = max(rmax, arr[j]);
            }
            int empSpace = min(lmax, rmax) - arr[i];
            res += empSpace;
        }
        return res;
    }
};