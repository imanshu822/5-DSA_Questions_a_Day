// Problem Link: https://www.codechef.com/problems/XOR2
// Problem Name: Consecutive Xor (CodeChef)
// Problem Code: XOR2
// Solution: accepted Submission

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solution(){
     int n;
     cin >> n;
     int xorr = 0;
     
     for(int i = 0; i < n; i++){
         int a;
         cin >> a;
         xorr ^= a;
     }
     if(n % 2 == 0){
         if(xorr != 0) 
         	cout<<"NO"<<endl;
         else 
         	cout<<"YES"<<endl;
         
     }
     else
         cout<<"YES"<<endl;
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
