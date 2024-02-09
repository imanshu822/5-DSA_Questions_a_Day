class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int actualSum = n * (n + 1)/2;
        int sum = 0;
        for(int x: nums){
            sum += x;
        }
        return actualSum - sum;
    }
};