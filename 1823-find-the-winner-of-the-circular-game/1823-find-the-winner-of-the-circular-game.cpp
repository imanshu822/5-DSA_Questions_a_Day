class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int> store(n);
        for(int i = 0; i < n; i++){
            store[i] = i + 1;
        }
        int idxToRemove = 0;
        while(store.size() > 1){
            idxToRemove = (idxToRemove + k - 1) % store.size();
            store.erase(store.begin() + idxToRemove);
        }
        return store[0];
    }
};
