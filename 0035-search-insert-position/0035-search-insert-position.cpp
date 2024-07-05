class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        // lower bound
        int n = nums.size();
        int ans = n;
        int low = 0, high = n - 1;
        while(low <= high){
            int mid = low + (high - low)/2;
            if(nums[mid] >= target){
                ans = min(ans, mid);
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }
        return ans;
    }
};