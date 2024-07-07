class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int firstPos = n;
        int lastPos = n;
        int low = 0, high = n - 1;
        while(low <= high){
            int mid = low + (high - low)/2;
            if(nums[mid] >= target){
                firstPos = min(firstPos, mid);
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        low = 0, high = n - 1;
        while(low <= high){
            int mid = low + (high - low)/2;
            if(nums[mid] > target){
                lastPos = min(lastPos, mid);
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        if(firstPos == lastPos){
            return {-1, -1};
        }
        return {firstPos, lastPos-1};
    }
};