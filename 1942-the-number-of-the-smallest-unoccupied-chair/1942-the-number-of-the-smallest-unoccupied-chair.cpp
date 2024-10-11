class Solution {
public:
    using Pair = pair<int,int>;
    int smallestChair(vector<vector<int>>& times, int targetFriend) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        // Min-heap to keep track of available chairs
        priority_queue<int,vector<int>,greater<int>> avai_c;
        // Min-heap to keep track of occupied chairs, sorted by the time they will become free
        priority_queue<Pair,vector<Pair>,greater<Pair>> occ_c;

        int n = times.size();
        for(int i=0;i<n;i++){
            times[i].push_back(i);
            avai_c.push(i);
        }
        sort(times.begin(),times.end());
        for(auto & time : times){
            int a_time = time[0], l_time = time[1], index = time[2];
            // Release chairs that have become free before the current friend's arrival
            while(!occ_c.empty() && occ_c.top().first <= a_time){
                int temp = occ_c.top().second;
                avai_c.push(temp);
                occ_c.pop();
            }
            // Take the smallest available chair number
            int chair = avai_c.top();
            avai_c.pop();
            // If the current friend is the target friend, return the chair number
            if(index == targetFriend)   return chair;
            // Mark the chair as occupied until the leave time
            occ_c.push({l_time,chair});
        }
        return -1;
    }
};