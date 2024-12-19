class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {

        // for(int i = 0; i < k; i++){
        //     int min_element_index = min_element(nums.begin(), nums.end()) - nums.begin();
        //     nums[min_element_index] *= multiplier;
        // }
        // return nums;

        priority_queue <int, vector<int>, greater<int> > pq; 
        for(int i= 0; i < nums.size(); i++){
            pq.push(nums[i]);
        }

        for(int i = 0; i < k; i++){
            int x = pq.top() * multiplier;
            pq.pop();
            pq.push(x);
        }
        return nums;
    }
};