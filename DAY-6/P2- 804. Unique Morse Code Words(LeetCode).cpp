// Problem Link: https://leetcode.com/problems/unique-morse-code-words/description/
// Problem Name: 804. Unique Morse Code Words (LeetCode)
// Solution: accepted submission

class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        char ch = 'a';
        string arr[] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        unordered_map <char, string> m;
        for(int i = 0; i < 26; i++){
            m[ch] = arr[i];
            ch++;
        }
       unordered_set <string> set;
        for(int i = 0; i < words.size(); i++){
            string s = "";
            for(int j = 0; j < words[i].size(); j++){
                s = s + m[words[i][j]];
            }
            if(set.find(s) == set.end())
                set.insert(s);
        }
        int size1 = set.size();
        return size1;
    }
};
