#include<bits/stdc++.h>

using namespace std;

int main(){
  char grid[10][10];
  int bx, by, rx, ry, lx, ly;
  for (int i = 0; i < 10;i++){
    for (int j = 0; j < 10;j++){
      cin >> grid[i][j];
    }
  }
  for (int i = 0; i < 10;i++){
    for (int j = 0; j < 10;j++){
      if(grid[i][j]=='B'){
        bx = j ;
        by = i ;
      }else if(grid[i][j]=='R'){
        rx = j ;
        ry = i ;
      }else if(grid[i][j]=='L'){
        lx = j ;
        ly = i ;
      }
    }
  }
  // cout << bx << by << lx << ly << rx << ry << "\n";

  int result = abs(lx - bx) - 1 + abs(ly - by);
  // if((lx==bx==rx||ly==by==ry)&&(ly<ry<by||by<ry<ly||lx<rx<bx||bx<rx<lx)){
  //   result += 2;
  // } Don't know why this doesn't work but the following code works.probably 
  // comparing more than two variable created the problem.

  if(lx==bx && lx==rx &&((ly<ry&&ry<by)||(by<ry&&ry<ly))){
    result += 2;
  }
  if(ly==by && ly==ry &&((lx<rx&rx<bx)||(bx<rx&&rx<lx))){
    result += 2;
  }
  cout << result << "\n";
  return 0;
}