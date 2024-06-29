class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int l = 0;
        int h = nums.size() - 1;

        while(l < h){
            int mid = (l + h) / 2;
            if( mid > 0 && mid < nums.size() - 1 && nums[mid] != nums[mid - 1] && nums[mid] != nums[mid + 1])
                return nums[mid];
            if((mid % 2 == 0 && nums[mid + 1] == nums[mid]) || (mid % 2 != 0 && nums[mid - 1] == nums[mid]))
                l = mid + 1;
            else 
                h = mid;
        }
        return nums[l];
    }
};