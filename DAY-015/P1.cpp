// Problem Link: https://leetcode.com/problems/maximum-sum-circular-subarray/description/
// Problem Name: 918. Maximum Sum Circular Subarray (LeetCode)
// Solution: accepted submission

class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int max1=INT_MIN, sum=0, total=0;
        for(auto x:nums){
            sum+=x;
            max1=max(max1,sum);
            if(sum<0)
                sum=0;
            total+=x; 
        }
        
        int max2=0;
        sum=0;
        for(auto x:nums){
            max1=max(max1,total+max2); 
            total-=x; 
            sum+=x;  
            max2=max(max2,sum); 
        }
        return max1;
    }
};