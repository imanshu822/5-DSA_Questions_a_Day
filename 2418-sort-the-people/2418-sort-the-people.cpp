class Solution {
public:
    static bool sortBySecond(const pair<string, int> &a, const pair<string, int> &b) {
        return a.second < b.second;
    }

    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<string, int>> store;
        
        for(int i = 0; i < names.size(); i++){
            store.push_back({names[i], heights[i]});
        }

        sort(store.rbegin(), store.rend(), sortBySecond);

        vector<string> res;
        for(int i = 0; i < names.size(); i++){
            res.push_back(store[i].first);
        }
        return res;
    }
};
