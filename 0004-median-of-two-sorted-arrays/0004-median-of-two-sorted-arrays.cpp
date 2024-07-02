class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> store;
        for(int it : nums1){
            store.push_back(it);
        }
        for(int it: nums2){
            store.push_back(it);
        }
        sort(store.begin(), store.end());
        int n = store.size();
        if(n % 2 != 0){
            return (double)store[n/2];
        }

        return (double)(store[n/2] + store[(n/2) - 1])/2;
    }
};