// Problem Link: https://www.codechef.com/problems/APPENDOR
// Problem Name: Append for OR (CodeChef)
// Problem Code: APPENDOR
// Solution: accepted Submission

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solution(){
  int n, y;
  cin >> n >> y;
  vector<int>v;
  for(int i = 0; i < n; i++){
  	int t ;
  	cin >> t;
  	v.push_back(t);
  }
  int z = v[0];
  for(int i = 1; i < n; i++){
	z = z | v[i];
  }
  int count = -1;
  for(int i = 0; i <= y; i++){
  	if((z | i) == y){
  		count++;
  		cout << i << endl;
  		return;
  	}
  }
  if(count == -1)
  	cout << -1 << endl;
 
  
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
