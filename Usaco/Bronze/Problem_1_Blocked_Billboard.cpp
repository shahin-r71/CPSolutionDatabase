#include<bits/stdc++.h>

using namespace std;

struct rect {
  int left, bottom, right, top;

  int area(){
    return (right - left) * (top - bottom);
  }
};
int xOverlap(rect x, rect y){
  return max(min(x.right, y.right) - max(x.left, y.left),0);
}
int yOverlap(rect m,rect n){
  return max(min(m.top, n.top) - max(m.bottom, n.bottom),0);
}
int main(){
  rect a, b, c;
  cin >> a.left >> a.bottom >> a.right >> a.top;
  cin >> b.left >> b.bottom >> b.right >> b.top;
  cin >> c.left >> c.bottom >> c.right >> c.top;

  int a_cXoverlap = xOverlap(a, c);
  int a_cYoverlap = yOverlap(a, c);
  int b_cXoverlap = xOverlap(b, c);
  int b_cYoverlap = yOverlap(b, c);
  cout << (a.area() + b.area()) - (a_cXoverlap * a_cYoverlap) - (b_cXoverlap * b_cYoverlap) << "\n";
  return 0;
}