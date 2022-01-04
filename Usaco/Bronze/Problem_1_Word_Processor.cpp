#include<bits/stdc++.h>

using namespace std;

int main(){
  int n, k;
  cin >> n >> k;
  int wordLength = 0;
  for (int i = 0; i < n;i++){
    string s;
    cin >> s;
    wordLength += s.length();
    if(wordLength<=k){
      if(i){
        cout << " ";
      }
      cout << s;
    }else{
      cout << "\n"
           << s;
      wordLength = s.size();
    }
  }

    return 0;
}