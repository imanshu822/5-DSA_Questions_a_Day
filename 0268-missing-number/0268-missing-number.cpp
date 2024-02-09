class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int curr = 0;
        for(int i = 0; i < nums.size(); i++){
            curr = i;
            if(i != nums[i])
                return i;
        }
        return curr+1;
    }
};