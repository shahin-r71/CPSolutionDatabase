#include<bits/stdc++.h>

using namespace std;

int main(){
  long long s[7];
  for (int i = 0; i < 7;i++){
    cin >> s[i];
  }
  sort(s, (s + 7));
  int a = s[0];
  int b = s[1];
  int c = s[6] - (a + b);
  cout<<a<<" "<<b<<" "<<c<<"\n";
  return 0;
}