class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());

        int j = 0;
        int n = intervals.size();
        for(int i = 1; i < n ; i++){
            if(intervals[j][1] >= intervals[i][0]){
                intervals[j][1] = max(intervals[j][1], intervals[i][1]);
                
            }else{
                j++;
                intervals[j] = intervals[i];
            }
            
        }
        intervals.resize(j + 1);
        return intervals;
    }
};