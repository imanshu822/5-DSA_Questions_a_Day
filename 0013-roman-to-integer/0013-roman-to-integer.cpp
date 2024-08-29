class Solution {
public:
    int romanToInt(string s) {
        int n = s.size();
        unordered_map<char, int> umap{
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };
        int num = 0;
        for(int i = 0; i < n; i++){
            int curr = umap[s[i]];
            if(i + 1 < n && umap[s[i]] < umap[s[i+1]]){
                num -= curr;
            }else
                num += umap[s[i]];
        }
        return num;
    }
};