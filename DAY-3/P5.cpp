// Problem Link: https://leetcode.com/problems/smallest-index-with-equal-value/description/
// Problem Name: 2057. Smallest Index With Equal Value
// Solution: accepted submission

class Solution {
public:
   int smallestEqual(vector<int>& nums) {
	for(int i=0;i<nums.size();i++)
		if(i%10==nums[i]) 
            return i;
	return -1;
}
};