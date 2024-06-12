class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int countZero = 0;
        int countOne = 0;
        int countTwo = 0;
        for(int i = 0; i < n; i++){
            if(nums[i] == 0){
                countZero++;
            }else if(nums[i] == 1){
                countOne++;
            }else{
                countTwo++;
            }
        }
        int i = 0;
        while(countZero > 0 || countOne > 0 || countTwo > 0){
            while(countZero--){
                nums[i] = 0;
                i++;
            }
            while(countOne--){
                nums[i] = 1;
                i++;
            }
            while(countTwo--){
                nums[i] = 2;
                i++;
            }
        }
    }
};