class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagramGroup;
        for(auto str : strs){
            string tempStr = str;
            sort(tempStr.begin(), tempStr.end());
            anagramGroup[tempStr].push_back(str);
        }
        vector<vector<string>> result;
        for(auto str: anagramGroup){
            result.push_back(str.second);
        }
        return result;
    }
};