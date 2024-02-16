#include <vector>
#include <unordered_map>
#include <algorithm>
#include <utility>

using namespace std;

class Solution {
public:
    typedef pair<int, int> PairType;

    static bool comp(const PairType &a, const PairType &b) {
        return a.second < b.second; 
    }

    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int, int> umap;
        for (auto x : arr) {
            umap[x]++;
        }

        vector<PairType> elems(umap.begin(), umap.end());
        sort(elems.begin(), elems.end(), comp);

        int count = elems.size(); 

        for (auto& elem : elems) {
            if (k >= elem.second) { 
                k -= elem.second;
                count--; 
            } else {
                break; 
            }
        }

        return count;
    }
};
