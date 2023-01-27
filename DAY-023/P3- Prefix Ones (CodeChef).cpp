// Problem Link: https://www.codechef.com/START75C/problems/PREFONES
// Problem Name: Prefix Ones (CodeChef)
// Problem Code: PREFONES
// Solution: Accepted submission

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solution(){
    ll n;
    cin >> n;
    string str;
    cin >> str;
    ll no_one = 0;
    ll temp =0 ;
    ll mAx = 0;
    ll j =0;
    while(j < n && str[j]=='1'){
        j++;
        temp++;
     }
     for(ll i = j; i < n; i++){
         if(str[i] == '1')
         no_one++;
         else{
             mAx=max(mAx,no_one);
             no_one=0;
         }
     }
     mAx = max(mAx, no_one);
     cout<< mAx + temp <<endl;
  
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
