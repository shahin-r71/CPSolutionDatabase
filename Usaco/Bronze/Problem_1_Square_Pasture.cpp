#include<bits/stdc++.h>
using namespace std;

int main(){
  int x1, x2, y1, y2,x3,x4,y3,y4, a, b, c, d, result;
  cin >> x1 >> y1 >> x2 >> y2>>x3>>y3>>x4>>y4;
  a = (x1 < x3) ? x1 : x3;
  b = (y1 < y3) ? y1 : y3;
  c = (x2 > x4) ? x2 : x4;
  d = (y2 > y4) ? y2 : y4;

  result = max((c - a), (d - b));
  cout << result*result << "\n";
  return 0;
}