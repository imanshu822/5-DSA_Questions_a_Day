class Solution {
public:
    int specialArray(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int N = nums[n-1];
        for(int i = 0; i < N; i++){
            int count = 0;
            for(int j = 0; j < n; j++){
                if(nums[j] >= i){
                    count++;
                }
            }
            if(count == i)
                return i;
        }
        return -1;

    }
};