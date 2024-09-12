class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        set<char> all;
        for(char ch: allowed){ // loop over allowed instead of all
            all.insert(ch);
        }
        int ans = 0;
        for(int i = 0; i < words.size(); i++){
            set<char> temp;
            for(char ch: words[i]){ // loop over the i-th word in words instead of temp
                temp.insert(ch);
            }
            bool consistent = true;
            for(char ch: temp){
                if(all.find(ch) == all.end()){ // check if the character is not allowed
                    consistent = false;
                    break;
                }
            }
            if(consistent){ // count only if the word is consistent
                ans++;
            }
        }
        return ans;
    }
};
