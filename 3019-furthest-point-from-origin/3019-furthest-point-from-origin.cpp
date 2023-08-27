class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int leftCount = 0, rightCount = 0, spaceCount = 0;
        for(int c: moves){
            if(c == 'L') leftCount++;
            else if(c == 'R') rightCount++;
            else if(c == '_') spaceCount++;
        }
        cout << leftCount << " " << rightCount << " " << spaceCount << endl;
        int maxDistance = 0;
        if(leftCount >= rightCount) 
            maxDistance = leftCount - rightCount + spaceCount;
        else 
            maxDistance = rightCount - leftCount + spaceCount;
        return maxDistance;
    }
};