class Solution {
public:
    bool canJump(vector<int>& nums) {
        int curr_max = 0;

        for(int i = 0; i < nums.size(); i++){
            if(i > curr_max)
                return false;
            curr_max = max(curr_max, i + nums[i]);

            if(curr_max >= nums.size() - 1){
                return true;
            }
        }
        return false;
    }
};