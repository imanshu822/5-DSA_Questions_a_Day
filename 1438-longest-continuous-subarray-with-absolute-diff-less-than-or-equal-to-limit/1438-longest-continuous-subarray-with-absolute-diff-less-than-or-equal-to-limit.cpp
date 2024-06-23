class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        int n = nums.size();
        int res = 0;
        
        for (int i = 0; i < n; i++) {
            priority_queue<int> max_heap;
            priority_queue<int, vector<int>, greater<int>> min_heap;
            
            for (int j = i; j < n; j++) {
                max_heap.push(nums[j]);
                min_heap.push(nums[j]);
                
                int max_val = max_heap.top();
                int min_val = min_heap.top();
                
                if (max_val - min_val <= limit) {
                    res = max(res, j - i + 1);
                } else {
                    break; 
                }
            }
        }
        
        return res;
    }
};
