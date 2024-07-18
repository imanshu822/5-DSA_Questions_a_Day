class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> umap;
        for(int i = 0; i < nums2.size(); i++){
            umap[nums2[i]] = i;
        }

        for(int i = 0; i < nums1.size(); i++){
            if(umap.find(nums1[i]) != umap.end()){
                for(int j = umap[nums1[i]]; j < nums2.size(); j++){
                    if(nums2[j] > nums1[i]){
                        nums1[i] = nums2[j];
                        break;
                    }else if(j == nums2.size()-1){
                        nums1[i] = -1;
                    }
                }
            }else{
                nums1[i] = -1;
            }
        } 
        return nums1;  
    }
};