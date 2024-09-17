class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string, int> umap;
        string str = "";
        for(int i = 0; i < s1.size(); i++){

            if(s1[i] != ' '){
                str += s1[i];
            }

            if(i+1 == s1.size() || s1[i] == ' '){
                umap[str]++;
                str = "";
            }
        }
        str = "";
        for(int i = 0; i < s2.size(); i++){
            
            if(s2[i] != ' '){
                str += s2[i];
            }
            
            if(i+1 == s2.size() || s2[i] == ' '){
                umap[str]++;
                str = "";
            }
        }
        vector<string> ans;
        for(auto it : umap){
            if(it.second == 1){
                ans.push_back(it.first);
            }
        }
        return ans;

    }
};