class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0;
        int oddCount = 0;
        int left = 0;
        int result = 0;
        int start = 0;

        for (int right = 0; right < n; ++right) {
            if (nums[right] % 2 != 0) {
                oddCount++;
            }
            
            while (oddCount > k) {
                if (nums[left] % 2 != 0) {
                    oddCount--;
                }
                left++;
                start = left;
            }

            if (oddCount == k) {
                int tempLeft = left;
                while (tempLeft < right && nums[tempLeft] % 2 == 0) {
                    tempLeft++;
                }
                result += (tempLeft - start + 1);
            }
        }
        
        return result;
    }
};
