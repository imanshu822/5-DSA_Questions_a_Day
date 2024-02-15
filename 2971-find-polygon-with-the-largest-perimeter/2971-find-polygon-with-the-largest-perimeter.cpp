class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        return largestPerimeterRecursive(nums, nums.size());
    }

private:
    long long largestPerimeterRecursive(vector<int>& nums, int end) {
        int max = 0;
        int i = 0;
        long long sum = 0;

        if (end < 3) {
            return -1;
        }

        while (i < end) {
            sum += nums[i];

            if (nums[i++] > nums[max]) {
                max = i - 1;
            }
        }

        if (sum - nums[max] > nums[max]) {
            return sum;
        }

        swap(nums[end - 1], nums[max]);

        return largestPerimeterRecursive(nums, end - 1);
    }
};