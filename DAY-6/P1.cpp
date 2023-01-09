// Problem Link: https://leetcode.com/problems/decode-the-message/description/
// Problem Name: 2325. Decode the Message (LeetCode)
// Solution: Accpeted Submission

class Solution {
public:
    string decodeMessage(string key, string message) {
        unordered_map<char,char> m;
        char ch = 'a';
        for(int i = 0; i < key.size(); i++){
            if(m.find(key[i]) == m.end()){
                if(key[i] >= 97 && key[i] <= 122){
                m[key[i]] = ch;
                ch++;
                }
            }   
        }
        string ans = "";
        for(int i = 0; i < message.size(); i++){
            if(message[i] >= 97 && message[i] <= 122){
                char ch1 = m[message[i]];
                ans.push_back(ch1);
            }
            else
                ans.push_back(message[i]);
        }
        return ans;
    }
};