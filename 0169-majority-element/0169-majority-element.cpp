class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int count = 1;
        int majority = nums[0];
        for(int i = 1; i < n; i++){
            if(count == 0){
                majority = nums[i];
                count = 1;
            }else if(nums[i] == majority){
                count++;
            }else{
                count--;
            }
        }
        count = 0;
        for(int i = 0; i < n; i++){
            if(nums[i] == majority){
                count++;
            }
            if(count > n/2)
                return majority;
        }
        return -1;
    }
};