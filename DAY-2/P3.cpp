// Problem Link: https://leetcode.com/problems/sorting-the-sentence/description/
// Problem Name: 1859. Sorting the Sentence (LeetCode)
// Solution: (accepted submission)

class Solution {
public:
    string sortSentence(string s) {
        vector<string>words(10);
       string temp = "";
       for(int i = 0 ; i < s.size() ; i++)
       {
           if(s[i]>='0' && s[i]<='9')
           {
               words[s[i]-'1'] = temp + " ";
               temp = "";
               i++;
           }else{
                temp += s[i];
           }
       }
       temp = "";
       for(int i = 0 ; i < words.size() ; i++)
       {
           temp += words[i];
       }
       temp.pop_back();
       return temp;
    }
};
