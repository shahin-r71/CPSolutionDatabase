#include<bits/stdc++.h>

using namespace std;

struct rect {
  long long left,bottom,right,top;

  long long area(){
    return (right-left)*(top-bottom);
  }
};
long long zero = 0;
long long xOverlap(long long left1, long long right1,long long left2 ,long long right2){
  return max((min(right1,right2)-max(left1,left2)),zero);
} 
long long yOverlap(long long bottom1,long long top1,long long bottom2,long long top2){
  return  max((min(top1,top2)-max(bottom1,bottom2)),zero);
} 
int main(){
  rect white, black1, black2;
  cin >> white.left >> white.bottom >> white.right >> white.top;
  cin >> black1.left >> black1.bottom >> black1.right >> black1.top;
  cin >> black2.left >> black2.bottom >> black2.right >> black2.top;

  long long coveredArea1 = xOverlap(black1.left, black1.right, white.left, white.right) * yOverlap(black1.bottom, black1.top, white.bottom, white.top);
  long long coveredArea2 = xOverlap(black2.left, black2.right, white.left, white.right) * yOverlap(black2.bottom, black2.top, white.bottom, white.top);
  long long intersect = xOverlap(black1.left, black1.right, black2.left, black2.right) * yOverlap(black1.bottom, black1.top, black2.bottom, black2.top);
  if(white.area()>coveredArea1 + coveredArea2-intersect){
    cout << "YES"
         << "\n";
  }else{
    cout << "NO"
         << "\n";
  }
  cout << white.area() - (coveredArea1 + coveredArea2 - intersect);
  cout
  return 0;
}