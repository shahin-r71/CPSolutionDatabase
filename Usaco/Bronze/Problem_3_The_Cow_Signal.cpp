#include<bits/stdc++.h>

using namespace std;

int main(){
  int m, n, k;
  cin >> m >> n >> k;
  int column = n * k;
  char original[m][n];
  char output[m][column];
  for (int i = 0; i < m;i++){
    for (int j = 0; j < n;j++){
      cin >> original[i][j];
    }
  }
    for (int i = 0; i < m; i++)
    {
      
      int col = 0;
      int l = k;
      for (int j = 0; j < n; j++)
      {

        while (l--)
        {
          output[i][col++] = original[i][j];
        }
        l = k;
      }
    }
    int z = k;
    for (int i = 0; i < m;i++){
      while(z--){
        for (int j = 0; j < column;j++){
        cout << output[i][j];
      }
      cout << "\n";
      }
      z = k;
    }
  
    return 0;
}