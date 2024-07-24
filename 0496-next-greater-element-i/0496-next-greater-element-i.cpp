class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

        int n = nums2.size();
        vector<int> nextGreater(n,-1);

        stack<int> st;
        st.push(-1);

        for(int i = n-1; i >= 0; i--){
            int curr = nums2[i];
            while (!st.empty() && st.top() <= curr) {
                st.pop();
            }
            if (!st.empty()) {
                nextGreater[i] = st.top();
            }
            st.push(curr);

        }

        unordered_map<int, int> umap;
        for(int i = 0; i < nums2.size(); i++){
            umap[nums2[i]] = nextGreater[i];
        }
        vector<int> res(nums1.size());
        for(int i = 0; i < nums1.size(); i++){
            res[i] = umap[nums1[i]];
        }
        return res;
    }
};