// Problem Link: https://practice.geeksforgeeks.org/problems/kth-smallest-element5635/0
// Problem Name: Kth smallest element (GFG)
// Solution: accepted submmission

// User function template for C++

class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        // code here
        sort(arr,arr+n);
        int mi, mx;
        int ans = arr[n-1] - arr[0];
        int curr_smallest = arr[0]+k;
        int curr_largest  = arr[n-1] - k;
        for(int i = 0; i < n;i++)
        {
            mi = min(curr_smallest, arr[i + 1] - k);
            mx = max(curr_largest, arr[i] + k);
            if(mi < 0)
            continue;
            ans = min(ans, mx - mi);
        }
        return ans;
    }
};
