class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> st;
        for(auto num : nums){
            st.insert(num);
        }
        int maxCount = 0;
        for(auto it = st.begin(); it != st.end(); it++){
            int count = 0;
            int currNum = *it;
            if(st.find(*it - 1) == st.end()){
                while(st.find(currNum) != st.end()){
                    count++;
                    currNum++;
                }
                maxCount = max(maxCount, count);
            }
        }
        return maxCount;
    }
};