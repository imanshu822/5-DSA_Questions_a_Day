class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        int leftMin = 0, rightMin = n;
        int totalArea = 0;
        for(int i = 0; i < heights.size(); i++){
            leftMin = -1;
            rightMin = n;
            for(int j = i - 1; j >= 0; j--){
                if(heights[j] < heights[i]){
                    leftMin = j;
                    break;
                }
            }
            for(int j = i + 1; j < n; j++){
                if(heights[j] < heights[i]){
                    rightMin = j;
                    break;
                }
            }
            int Area = (rightMin - leftMin - 1 ) * heights[i];
            totalArea = max(totalArea, Area);
        }
        return totalArea;
    }
};