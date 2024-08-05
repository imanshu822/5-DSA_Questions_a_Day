class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if (k <= 1) return 0;
        int n = nums.size();
        int prod = 1;
        int i =0, j = 1;
        int count = 0;
 
        for(int j = 0; j < n; j++){
            prod *= nums[j];

            while(prod >= k){
                prod /= nums[i];
                i++;
            }
            count += j - i + 1;
        }
        return count;
    }
};