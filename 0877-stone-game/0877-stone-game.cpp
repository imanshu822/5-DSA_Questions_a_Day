class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        int n = piles.size();
        int alice = 0;
        int bob = 0;
        int i = 0; 
        int j = n - 1;
        int k = 0;
        while(i < j){
            if(k % 2 == 0){
                if(piles[i] >= piles[j]){
                    alice += piles[i];
                    i++;
                }else{
                    alice += piles[j];
                    j--;
                }
                
            }else{
                if(piles[i] >= piles[j]){
                    bob += piles[i];
                    i++;
                }else{
                    bob += piles[j];
                    j--;
                }
            }
        }
        if(alice > bob){
            return true;
        }
        return false;
    }
};