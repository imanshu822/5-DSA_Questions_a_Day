// class Solution {
// public:
//     string minWindow(string arr, string t) {
//         int m = arr.size();
//         int n = t.size();
//         unordered_map<char, int> umap;
//         for (auto ch : t) {
//             umap[ch]++;
//         }
//         int count = umap.size();
//         int i = 0, j = 0;
//         int min_len = INT_MAX;
//         int min_start = 0;

//         while (j < m) {
//             if (umap.find(arr[j]) != umap.end()) {
//                 umap[arr[j]]--;
//                 if (umap[arr[j]] == 0)
//                     count--;
//                 j++;
//             }
//             while (count == 0) {
//                 if (j - i < min_len) {
//                     min_len = j - i;
//                     min_start = i;
//                 }

//                 if (umap.find(arr[i]) != umap.end()) {
//                     umap[arr[i]]++;
//                     if (umap[arr[i]] > 0)
//                         count++;
//                 }
//                 i++;
//             }
//         }
//         if (min_len == INT_MAX)
//             return "";
//         return arr.substr(min_start, min_len);
//     }
// };

class Solution {
public:
    string minWindow(string arr, string t) {
        int m = arr.size();
        int n = t.size();
        unordered_map<char, int> umap;
        for(auto ch: t){
            umap[ch]++;
        }
        
        int required = umap.size(); 
        int formed = 0; 
        unordered_map<char, int> window_map;
        
        int min_len = INT_MAX;   
        int min_start = 0;
        int i = 0, j = 0;

        while(j < m){
            window_map[arr[j]]++;
            if(umap.find(arr[j]) != umap.end() && window_map[arr[j]] == umap[arr[j]]) {
                formed++;
            }
            while(formed == required && i <= j){
                if(j - i + 1 < min_len){
                    min_len = j - i + 1;
                    min_start = i;
                }
                window_map[arr[i]]--;
                if(umap.find(arr[i]) != umap.end() && window_map[arr[i]] < umap[arr[i]]) {
                    formed--;
                }
                i++;
            }
            j++; 
        }
        if(min_len == INT_MAX)
            return "";
        return arr.substr(min_start, min_len);
    }
};