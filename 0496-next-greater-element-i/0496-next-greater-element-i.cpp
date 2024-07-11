class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> nextGreaterMap;
        stack<int> st;

        for(int num : nums2){
            while(!st.empty() && st.top() < num){
                nextGreaterMap[st.top()] = num;
                st.pop();
            }
            st.push(num);
        }

        while(!st.empty()){
            nextGreaterMap[st.top()] = -1;
            st.pop();
        }

        vector<int> result;
        for(int i = 0; i < nums1.size(); i++){
            result.push_back(nextGreaterMap[nums1[i]]);
        }
        return result;
    }
};