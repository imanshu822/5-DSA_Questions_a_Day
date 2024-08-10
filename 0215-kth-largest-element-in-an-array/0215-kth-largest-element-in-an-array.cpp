class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        // first what i will do is, create the maxheap of first k element of array 

        priority_queue<int, vector<int>, greater<int>> pq;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            if(pq.size() < k){
                pq.push(nums[i]);
            }else if(nums[i] > pq.top()){
                pq.pop();
                pq.push(nums[i]);
            }
        }
        return pq.top();
    }
};