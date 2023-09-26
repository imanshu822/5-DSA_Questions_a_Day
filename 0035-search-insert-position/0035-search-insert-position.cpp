class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
       int high = nums.size()-1, low=0;
       while(high >= low){
         int mid = (high + low)/2;
         if(nums[mid]==target) 
            return mid;
         else if(nums[mid] > target) 
            high = mid - 1;
         else 
            low = mid + 1;
       }
      return low;
    }
};