class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        unordered_map<char, int> umapS;
        unordered_map<char, int> umapT;

        for(int i= 0; i < s.size(); i++){
            umapS[s[i]]++;
        }
        for(int i = 0;i < t.size(); i++){
            umapT[t[i]]++;
        }

        if(umapS == umapT){
            return true;
        }
        return false;
    }
};