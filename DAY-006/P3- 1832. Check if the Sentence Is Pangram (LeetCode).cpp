// Problem Link: https://leetcode.com/problems/check-if-the-sentence-is-pangram/description/
// Problem Name: 1832. Check if the Sentence Is Pangram (LeetCode)
// Solution: accepted submission


class Solution {
public:
    bool checkIfPangram(string sentence) {
        for(char ch = 'a'; ch <= 'z'; ch++){
            if(sentence.find(ch) == -1)
                return false;
        }
        return true;
        
    }
};