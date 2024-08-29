class Solution {
public:
    int romanToInt(string s) {
        int n = s.size();
        int num = 0;

        for (int i = 0; i < n; ++i) {
            if (i + 1 < n) {
                if (s[i] == 'I' && s[i + 1] == 'V') {
                    num += 4;
                    ++i; 
                } else if (s[i] == 'I' && s[i + 1] == 'X') {
                    num += 9;
                    ++i; 
                } else if (s[i] == 'X' && s[i + 1] == 'L') {
                    num += 40;
                    ++i; 
                } else if (s[i] == 'X' && s[i + 1] == 'C') {
                    num += 90;
                    ++i; 
                } else if (s[i] == 'C' && s[i + 1] == 'D') {
                    num += 400;
                    ++i; 
                } else if (s[i] == 'C' && s[i + 1] == 'M') {
                    num += 900;
                    ++i; 
                } else {
                    num += getValue(s[i]);
                }
            } else {
                num += getValue(s[i]);
            }
        }
        return num;
    }

private:
    int getValue(char c) {
        switch (c) {
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
            default: return 0;
        }
    }
};
