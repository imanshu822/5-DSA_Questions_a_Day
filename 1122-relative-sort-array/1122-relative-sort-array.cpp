class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int, int> countMap;
        for(int num : arr1) {
            countMap[num]++;
        }

        vector<int> res;
        for(int num : arr2) {
            if(countMap.find(num) != countMap.end()) {
                while(countMap[num] > 0) {
                    res.push_back(num);
                    countMap[num]--;
                }
                countMap.erase(num);
            }
        }

        vector<int> remainingElements;
        for(auto& pair : countMap) {
            while(pair.second > 0) {
                remainingElements.push_back(pair.first);
                pair.second--;
            }
        }
        sort(remainingElements.begin(), remainingElements.end());
        res.insert(res.end(), remainingElements.begin(), remainingElements.end());

        return res;
    }
};
