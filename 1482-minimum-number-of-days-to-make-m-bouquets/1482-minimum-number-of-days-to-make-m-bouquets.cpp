class Solution {
public:

    bool isPossible(vector<int>& bloomDay, int day, int m, int k){
        int res = 0;
        int count = 0;
        for(int i = 0; i < bloomDay.size(); i++){
            if(bloomDay[i] <= day){
                count++;
                if(count == k){
                    res++;
                    count = 0;
                }
            }else{
                count = 0;
            }
        }
        return res >= m;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        if(static_cast<long long>(m) * k > bloomDay.size())
            return -1;

        int low = *min_element(bloomDay.begin(), bloomDay.end());
        int high = *max_element(bloomDay.begin(), bloomDay.end());

        while(low <= high){
            int mid = low + (high - low) / 2;
            if(isPossible(bloomDay, mid, m, k))
                high = mid - 1;
            else
                low = mid + 1;
        }
        return low;
    }
};
