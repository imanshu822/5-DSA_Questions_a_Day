// Problem Link: https://www.codechef.com/problems/SUMDIV2
// Problem Name: Find an integer (CodeChef)
// Problem Code: SUMDIV2
// Solution: accepted Submission

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solution(){
  long long int a,b;
  cin >> a >> b;
  if(a == b){
    cout << a <<endl;
    return;
  }
  long long int final = a * b - a - b;
  if(final < 0) 
    final = 2 * a * b - a - b;
         cout << final << endl;
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
