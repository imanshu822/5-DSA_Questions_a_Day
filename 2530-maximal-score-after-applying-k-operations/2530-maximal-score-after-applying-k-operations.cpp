class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        int n = nums.size();

        priority_queue<int> pq;

        for(int num : nums){
            pq.push(num);
        }
        long long res = 0;
        for(int i = 0; i < k; i++){
            
            res += pq.top();
            int x = ceil((double)pq.top()/3);
            pq.pop();
            pq.push(x);
            
        }
        return res;
    }
};