// Problem Link:https://www.codechef.com/JAN231C/problems/FARFROMO
// Problem Name: Far from origin (CodeChef)
// Solution: accepted Submission

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solution(){
  int x1,y1,x2,y2;
  cin >> x1 >> y1 >> x2 >> y2;
    double distance1 = sqrt(x1*x1 + y1*y1);
    double distance2 = sqrt(x2*x2 + y2*y2);
    if (distance1 > distance2) {
      cout << "ALEX" << endl;
    } else if (distance2 > distance1) {
      cout << "BOB" << endl;
    } else {
        cout << "EQUAL" << endl;
    }
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
