// Problem Link: https://www.codechef.com/JAN231C/problems/ARRHALVES
// Problem Name: Array Halves (CodeChef)
// Problem Code: ARRHALVES
// Solution: accepted submission

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solution(){
  ll n;
  cin >> n; 
  ll arr[2*n];
  for(ll i = 0;i < 2 * n; i++){
    cin >> arr[i];
  }
  vector<ll> v1, v2;
  for(ll i = 0; i < n; i++){
    if(arr[i] > n)
      v1.push_back(i);
  }
  for(ll i = n ;i < 2*n; i++){
    if(arr[i] <= n)
      v2.push_back(i);
  }
  ll count = 0;
  ll l = v1.size(); 
  for(ll i = 0; i < l; i++){
    count = count + v2[i] - v1[i]; 
  }
  cout << count << endl;
  
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