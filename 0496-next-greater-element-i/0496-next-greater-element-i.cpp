class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> nextGreaterMap;
        stack<int> st;
        
        // Traverse nums2 from right to left
        for (int i = nums2.size() - 1; i >= 0; i--) {
            // Maintain the stack to always have elements in decreasing order
            while (!st.empty() && st.top() <= nums2[i]) {
                st.pop();
            }
            
            // If the stack is empty, no greater element exists
            if (st.empty()) {
                nextGreaterMap[nums2[i]] = -1;
            } else {
                nextGreaterMap[nums2[i]] = st.top();
            }
            
            // Push the current element onto the stack
            st.push(nums2[i]);
        }
        
        // Prepare the result for nums1 using the map
        vector<int> res;
        for (int num : nums1) {
            res.push_back(nextGreaterMap[num]);
        }
        
        return res;
    }
};