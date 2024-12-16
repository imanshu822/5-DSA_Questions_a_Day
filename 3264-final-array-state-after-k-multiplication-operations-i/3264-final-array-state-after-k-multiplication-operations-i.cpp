class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {

        for(int i = 0; i < k; i++){
            int min_element_index = min_element(nums.begin(), nums.end()) - nums.begin();
            nums[min_element_index] *= multiplier;
        }
        return nums;
    }
};