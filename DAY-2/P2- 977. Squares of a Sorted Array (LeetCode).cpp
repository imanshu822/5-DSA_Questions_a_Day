//Peoblem Link: https://leetcode.com/problems/squares-of-a-sorted-array/description/
//Problem Name: 977. Squares of a Sorted Array (LeetCode)
//Solution: Using two Pointers (accepted submission)

class Solution {
public:
       vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        int start=0;
        int end=n-1;
        
        vector <int> res(n);
        int pos = n-1;
        
        while(start <= end)
        {
            if(abs(nums[start]) < abs(nums[end])) {
                res[pos--] = nums[end] * nums[end];
                end--;
            } else{
                res[pos--] = nums[start] * nums[start];
                start++;
            }
        }
        
        return res;
    }
};


// Solution: Using loop (accepted submission)

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int l = nums.size();
        for(int i = 0; i < l; i++){
            nums[i] = pow(nums[i],2);
        }
        sort(nums.begin(), nums.end());
        return nums;
    }
};
