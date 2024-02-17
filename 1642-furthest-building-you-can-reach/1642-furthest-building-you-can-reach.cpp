class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        priority_queue<int>pq;
        int i=0, n = heights.size();
        for(i; i<n-1; i++){
            int diff = heights[i+1]-heights[i];
            if(diff > 0){
                if(bricks >= diff){
                    bricks -= diff;
                    pq.push(diff);
                }
                else if(ladders > 0){
                    if(!pq.empty()){
                        int maxPastBrick = pq.top();
                        if(diff < maxPastBrick){
                            pq.pop();               
                            bricks += maxPastBrick; 

                            bricks -= diff;          
                            pq.push(diff);          

                            ladders--;               
                        }
                        else ladders--;              
                    }
                    else ladders--;                  
                }
                else break;
            }
        }
        return i;
    }
};

