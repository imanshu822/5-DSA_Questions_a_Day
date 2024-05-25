class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        int ans = 0;
        unordered_map<int, int> freq;
        for(auto n: nums){ freq[n]++; }
        for(auto [k,v]: freq){
            if(v == 2) ans = ans ^ k;
        }
        return ans;
    }
};