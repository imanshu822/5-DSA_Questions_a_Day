class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        set<vector<int>> st;
        for(int i = 0; i < n; i++){
            for(int j = i+1; j < n; j++){
                set<long long> hashSet;
                for(int k = j+1; k < n; k++){
                    long long sum = nums[i] + nums[j];
                    sum += nums[k];
                    long long fourth = target - (sum);
                    
                    if(hashSet.find(fourth) != hashSet.end()){
                        int x = int (fourth);
                        vector<int> temp = {nums[i], nums[j], nums[k], x};
                        sort(temp.begin(), temp.end());
                        st.insert(temp);
                    }
                    hashSet.insert(nums[k]);
                }
            }
        }
        vector<vector<int>> result(st.begin(), st.end());
        return result;
    }
};