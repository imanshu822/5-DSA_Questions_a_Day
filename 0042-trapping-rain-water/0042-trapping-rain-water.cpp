class Solution {
public:
    int trap(vector<int>& nums) {
        int n = nums.size();
        int l = 0, r = n - 1;
        int lmax = 0, rmax = 0;
        int result= 0;
        while(l < r){
            if(nums[l] <= nums[r]){
                if(nums[l] >= lmax)
                    lmax = nums[l];
                else
                    result += (lmax - nums[l]);
                l++;
            }else if(nums[r] <= nums[l]){
                if(nums[r] >= rmax)
                    rmax = nums[r];
                else
                    result += (rmax - nums[r]);
                r--;
            }
        }
        return result;
    }
};