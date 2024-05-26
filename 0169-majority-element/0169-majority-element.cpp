class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int currCount = 1;
        if(n == 1)
            return nums[0];
        for(int i = 1; i < n; i++){
            if(nums[i] == nums[i-1])
                currCount++;
            if(currCount > n/2)
                return nums[i];
        }
        return 1;
    }
};