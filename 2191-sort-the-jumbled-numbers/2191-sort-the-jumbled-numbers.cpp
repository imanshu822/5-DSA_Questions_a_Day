class Solution {
public:

    static bool comp(pair<int,int> p1, pair<int, int> p2){
        if(p1.second < p2.second) return true;
        if(p1.second > p2.second) return false;
        return false; 
    }

    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        vector<int> store;
        for(int i = 0; i < nums.size(); i++){
            int n = nums[i];
            long long newNum = 0;
            int multiplier = 1;
            if(n == 0){
                newNum = mapping[0];
            }
            while(n > 0){
                int rem = n % 10;
                newNum = newNum + mapping[rem] * multiplier;
                multiplier *= 10;
                n = n/10;
            }
            store.push_back(newNum);
        }
        vector<pair<int, int>> temp;
        for(int i = 0; i < nums.size(); i++){
            temp.push_back({nums[i], store[i]});
        }

        sort(temp.begin(), temp.end(), comp);

        vector<int> result;

        for(int i = 0; i < temp.size(); i++){
            result.push_back(temp[i].first);
        }
        return result;
    }
};
