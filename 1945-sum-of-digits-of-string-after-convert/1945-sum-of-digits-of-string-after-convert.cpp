class Solution {
public:
    int getLucky(string s, int k) {

        int n = s.size();
        string currStr = "";
        for(int i = 0; i < n; i++){
            currStr += to_string(s[i] - 'a' + 1);
        }

        int res = 0;
        for(char c : currStr) {
            res += c - '0';
        }

        while(--k) {
            int currRes = 0;
            while(res > 0) {
                int rem = res % 10;
                currRes += rem;
                res /= 10;
            }
            res = currRes;
        }
        
        return res;
    }
};
