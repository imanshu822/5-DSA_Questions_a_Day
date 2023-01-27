// Problem Link: https://www.codechef.com/START75C/problems/TWORANGES
// Problem Name: Two Ranges (CodeChef)
// Problem Code: TWORANGES
// Solution: accepted submission

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solution(){
    int a, b, c, d; 
    cin >> a >> b >> c >> d; 
 
    int count = 0; 
    int lb = max(a, c); 
    int ub = min(b, d); 
 
    if (lb > ub) { 
        count = (b - a + 1) + (d - c + 1); 
    } 
    else { 
        count = (b - a + 1) + (d - c + 1) - (ub - lb + 1); 
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
