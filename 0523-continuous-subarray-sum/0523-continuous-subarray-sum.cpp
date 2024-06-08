class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> reminderMap;
        reminderMap[0] = -1;
        int sum = 0;
        for(int i = 0; i < n; i++){
            sum += nums[i];
            int reminder = k == 0 ? sum : sum % k;
            if(reminderMap.find(reminder) != reminderMap.end()){
                if(i - reminderMap[reminder] > 1){
                    return true; 
                }
            }else{
                reminderMap[reminder] = i;
            }
        }
        return false;
    }
};