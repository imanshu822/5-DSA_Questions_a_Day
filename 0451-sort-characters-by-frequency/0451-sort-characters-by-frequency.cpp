class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> umap;
        for (auto ch : s) {
            umap[ch]++;
        }
        vector<pair<char, int>> charStore;
        for (auto i : umap) {
            charStore.push_back({i.first, i.second});
        }
        sort(charStore.begin(), charStore.end(),
             [](const pair<char, int>& a, const pair<char, int>& b) {
                 return a.second > b.second;
             });
        string result;
        for (auto i : charStore) {
            int temp = i.second;
            while (temp--) {
                result += i.first;
            }
        }
        return result;
    }
};