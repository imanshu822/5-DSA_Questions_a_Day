class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        if(n == 1)
            return 1;
        if(n == 0)
            return 0;
        int maxCount = 1;
        int count = 1;
        for(int i = 1; i < n; i++){
            if(nums[i] == nums[i-1])
                continue;
            if(nums[i] == nums[i-1] + 1){
                count++;
            }else{
                count = 1;
            }
            maxCount = max(maxCount, count);
        }
        return maxCount;
    }
};