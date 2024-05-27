class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int pt1 = 0; 
        for(int i = 0; i < n; i++){
            if(nums[pt1] != nums[i]){
                pt1++;
                nums[pt1] = nums[i];
            }
        }
        return pt1+1;
    }
};