// Problem Link: https://www.codechef.com/JAN231C/problems/ARRSWAP
// Problem Name: Asymmetric Swaps (CodeChef)
// Solution: accepted Submission

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solution(){
  int n ; cin >> n; 
  vector<int> v;
  for(int i = 0; i < 2 * n; i++){
    int x; cin >> x; 
    v.push_back(x);
  }
  int res = 1e9;
  sort(v.begin(), v.end());
  for(int i = 0; i <= n; i++){
    res = min(res, v[n + i - 1] - v[i]);
  }
  cout << res << endl;
}
int main()
{
  int notc;
  cin>>notc;
  while(notc--)
  {
     solution();
  }
  return 0;
}