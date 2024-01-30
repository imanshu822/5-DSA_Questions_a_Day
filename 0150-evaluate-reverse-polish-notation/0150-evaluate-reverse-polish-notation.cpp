class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        vector<int> res;
        for(int i=0; i<tokens.size(); i++) {
            int x = res.size();
            int a = 0;

            if(tokens[i] == "+") {
                a = res[x-2] + res[x-1];
                res.pop_back();
                res.pop_back();
                res.push_back(a);
            } else if(tokens[i] == "-") {
                a = res[x-2] - res[x-1];
                res.pop_back();
                res.pop_back();
                res.push_back(a);
            } else if(tokens[i] == "*") {
                a = res[x-2] * res[x-1];
                res.pop_back();
                res.pop_back();
                res.push_back(a);
            } else if(tokens[i] == "/") {
                a = res[x-2] / res[x-1];
                res.pop_back();
                res.pop_back();
                res.push_back(a);
            } else {
                stringstream ss;
                ss << tokens[i];
                ss >> a;
                res.push_back(a);
            }
        }
        return res[0];
    }
};