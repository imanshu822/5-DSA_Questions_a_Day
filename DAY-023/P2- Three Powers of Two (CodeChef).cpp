// Problem Link: https://www.codechef.com/problems/THREEPOW2
// Problem Name: Three Powers of Two (CodeChef)
// Problem Code: THREEPOW2
// Solution: accepted Submission

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solution(){
  int n; 
  cin >> n;
  string str; 
  cin >> str;
  int no_one = 0;
  for(int i = 0; i < n; i++){
    if(str[i] == '1')
        no_one++;
  }
  if(str == "1" || str == "10")
    cout << "NO" << endl;
  else if(no_one == 2 || no_one == 3 || no_one == 1){
    cout << "YES" << endl;
  }
  else cout << "NO" << endl;
  
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
