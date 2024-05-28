class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int target = 0;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;
        for(int i = 0; i < n; i++){
            if(i > 0 && nums[i] == nums[i-1]) continue;
            int j = i+1;
            int k = n-1;
            while(j < k){
                long long sum = nums[i] + nums[j] + nums[k];
                if(sum == target){
                    vector<int> temp = {nums[i], nums[j], nums[k]};
                    result.push_back(temp);
                    j++; k--;
                    while(j < k && nums[j] == nums[j-1]) j++;
                    while(j < k && nums[k] == nums[k+1]) k--;
                }else if(sum < target){
                    j++;
                }else {
                    k--;
                }
            }
        }
        return result;
    }
};