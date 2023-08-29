class Solution {
    public int bestClosingTime(String str) {
        int sum = 0;
        int[] arr = new int[str.length()];
        for(int i = 0 ; i < str.length() ; i++) {
            if(str.charAt(i) == 'Y') {
                sum += 1;
                arr[i] = 1;
            } else {
                arr[i] = 0;
            }
        }
        int mini = sum;
        int hr = 0;
        for(int i = 0 ; i < arr.length ; i++) {
            if(arr[i] == 1) {
                arr[i] = 0;
                sum = sum - 1;
                if(sum < mini) {
                    mini = sum;
                    hr = i + 1;
                }
            } else {
                arr[i] = 1;
                sum = sum + 1;
                if(sum < mini) {
                    mini = sum;
                    hr = i + 1;
                }    
            }
        }
        return hr;
    }
}