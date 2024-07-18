class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int l1 = nums1.size(), l2 = nums2.size();
        stack<int> st;
        vector<int> store(l2, -1);

        unordered_map<int, int> umap;
        for (int i = 0; i < nums2.size(); i++) {
            umap[nums2[i]] = i;
        }

        for (int i = 0; i < l2; i++) {
            while (!st.empty() && nums2[st.top()] < nums2[i]) {
                store[st.top()] = nums2[i];
                st.pop();
            }
            st.push(i);
        }

        for (int i = 0; i < l1; i++) {
            nums1[i] = store[umap[nums1[i]]];
        }

        return nums1;
    }
};
