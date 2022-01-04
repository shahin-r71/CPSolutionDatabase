#include<bits/stdc++.h>

using namespace std;
int main(){
  int t, tw, th, w1, h1, w2, h2, left, bottom, right, top;
  cin >> t;
  while(t--){
    cin >> tw >> th;
    cin >> left >> bottom >> right >> top;
    cin >> w1 >> h1;
    w2 = right - left;
    h2 = top - bottom;
    if((h1+h2)>th && (w1+w2)>tw){
      cout << "-1"
           << "\n";
      continue;
    }
    if((w1+w2)<tw){
      int wchange = w1 - left;
      if(wchange>0){
        cout << wchange << "\n";
      }else{
        cout << "-1"
             << "\n";
      }
      continue;
    }
    if((h1+h2)<th){
      int hchange = h1 - bottom;
      if(hchange>0){
        cout << hchange << "\n";
      }else{
        cout << "-1"
             << "\n";
      }
    }
  }
  return 0;
}