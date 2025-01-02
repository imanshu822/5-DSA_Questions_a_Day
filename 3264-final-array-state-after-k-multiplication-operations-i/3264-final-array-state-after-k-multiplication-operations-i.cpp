class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

        for(int i = 0; i < nums.size(); i++){
            pq.push({nums[i], i});
        }


        for(int i = 0; i < k; i++){
            int value = pq.top().first * multiplier;
            int index = pq.top().second;
            pq.pop();
            pq.push({value, index});

        }

        while(!pq.empty()){
            int index = pq.top().second;
            nums[index] = pq.top().first;
            pq.pop();
        }
        return nums;
    }
};