class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        sort(strs.begin(), strs.end());
        string first = strs[0];
        string last = strs[n-1];
        int i = 0, j = 0;
        string res = "";
        while(i < first.size() && j < last.size()){
            if(first[i] == last[i]){
                res += first[i];
                i++;
                j++;
            }else{
                break;
            }
        }
        return res;
    }
};