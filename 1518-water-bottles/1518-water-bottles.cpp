class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int totalCount = numBottles;
        while(numBottles >= numExchange){
            totalCount += (numBottles / numExchange);
            numBottles = (numBottles / numExchange) + (numBottles % numExchange);
        }
        return totalCount;
    }
};