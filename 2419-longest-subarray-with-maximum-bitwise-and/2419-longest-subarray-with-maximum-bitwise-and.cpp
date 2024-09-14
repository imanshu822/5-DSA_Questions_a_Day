class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int maxi=INT_MIN,count=0,ans=0,n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]>maxi){
                maxi=nums[i];
                count=1;
                ans=1;
            }
            else if(nums[i]==maxi){
                count++;
            }
            else{
                count=0;
            }
            ans=max(ans,count);
        }
        return ans;
    }
};