class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> result;
        queue<int> q;
        for(int i = 1; i < 9; i++){
            q.push(i);
        }
        while(!q.empty()){
            int x = q.front();
            q.pop();
            int xLastDigit = x % 10;
            int newX = (x * 10) + xLastDigit+1;
            if(newX <= high && xLastDigit != 9){
                q.push(newX);
            }
            if(newX >= low && newX <= high && xLastDigit != 9)
                result.push_back(newX);
        }
        return result;
    }
};