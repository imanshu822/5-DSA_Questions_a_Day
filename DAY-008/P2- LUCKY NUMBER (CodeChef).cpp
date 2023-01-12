// Problem Link: https://www.codechef.com/START73C/problems/LUCKYN
// Problem Name: LUCKY NUMBER (CodeChef)
// Problem Code: LUCKYN
// Solution: accepted Submission

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solution(){
  int n;
  cin >> n; 
  int flag = 0;
  while(n){
  	int digit = n % 10;
  	n = n /10;
  	if(digit == 7){
  		flag = 1;
  	}
  }
  if(flag == 1)
  	cout << "YES" << endl;
  else
   	cout << "NO" << endl;

  
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
