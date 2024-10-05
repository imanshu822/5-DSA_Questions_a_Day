class Solution {
public:
    bool allZeros(vector<int> &count) {
        for (int i = 0; i < 26; i++) {
            if (count[i] != 0) 
                return false;
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        int n = s1.length(); 
        int m = s2.length();
        if (n > m) 
            return false;

        vector<int> count(26, 0);
        for (int i = 0; i < n; i++) {
            count[s1[i] - 'a']++;
            count[s2[i] - 'a']--;
        }
        //it will check for s1 = abcd, s2 = cdab
        if (allZeros(count)) 
            return true;

        for (int i = n; i < m; i++) {
            count[s2[i] - 'a']--;
            count[s2[i - n] - 'a']++;
            if (allZeros(count)) 
                return true;
        }

        return false;
    }
};