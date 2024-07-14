class Solution {
public:
    string countOfAtoms(string formula) {
        map<string, int> aCount;
        stack<int> mStack;
        string result;
        int count = 0, multiplier = 1;
        
        for (int i = size(formula) - 1; i >= 0; i--) 
        {
            if (isalpha(formula[i]) && islower(formula[i])) 
            {
                int len = 2;
                i--;
                
                while (i >= 0 && islower(formula[i])) 
                {
                    i--;
                    len++;
                }
                
                string atom = formula.substr(i, len);
                aCount[atom] += max(count, 1) * multiplier;
                count = 0;
            } 
            else if (isalpha(formula[i]) && isupper(formula[i])) 
            {
                string atom(1, formula[i]);
                aCount[atom] += max(count, 1) * multiplier;
                count = 0;
            } 
            else if (isdigit(formula[i])) 
            {
                count = formula[i] - '0';
                int power = 10;
                
                while (i - 1 >= 0 && isdigit(formula[i - 1])) {
                    count += power * (formula[--i] - '0');
                    power *= 10;
                }
            } 
            else if (formula[i] == ')') 
            {
                mStack.push(multiplier);
                multiplier *= max(count, 1);
                count = 0;
            } 
            else {
                multiplier = mStack.top();
                mStack.pop();
            }
        }
        
        for (auto [atom, cnt]: aCount) {
            result += atom;
            
            if (cnt > 1) {
                result += to_string(cnt);
            }
        }
        
        return result;
    }
};