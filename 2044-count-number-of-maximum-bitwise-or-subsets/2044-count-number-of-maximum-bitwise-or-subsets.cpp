#pragma GCC target("popcnt")
class Solution {
public:
    int countMaxOrSubsets(vector<int>& nums) { //O(n*maxValue) time, O(1) storage
        int maxOr=0; 
        for(int n:nums) maxOr|=n;
        int numberOfBadSubsets = 0; //bad subset means subset whose OR is less than maxOR
        for(int mask=maxOr;mask; mask=(mask-1)&maxOr){ //iterates over subsets of the set bits of the maxOr
            int cnt = 0; 
            for(int n:nums) if(!(n&mask)) cnt++; //counts elements of nums that have all 0s in the positions that are 1s in the current mask
            numberOfBadSubsets += (__builtin_popcount(mask)%2 ? 1 : -1)*((1<<cnt)-1); //inclusion exclusion
        }
        return (1<<nums.size())-1- numberOfBadSubsets;//total number of subsets minus number of bad subsets
    }
};