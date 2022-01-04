#include<bits/stdc++.h>

using namespace std;

int main(){
  int left_a,bottom_a,right_a,top_a,left_b,bottom_b,right_b,top_b;
  cin>>left_a>>bottom_a>>right_a>>top_a;
  cin>>left_b>>bottom_b>>right_b>>top_b;
  int area_a=(right_a-left_a)*(top_a-bottom_a);

  int xOverlap= max(min(right_a,right_b)-max(left_a,left_b),0);
  int yOverlap= max(min(top_a,top_b)-max(bottom_a,bottom_b),0);

  if(top_a>top_b && bottom_a<bottom_b){
    cout<<area_a<<"\n";
  }
  else if(xOverlap==abs(right_a-left_a)|| yOverlap==abs(top_a-bottom_a)){
    cout<<area_a-(xOverlap*yOverlap)<<"\n";
  }else{
    cout<<area_a<<"\n";
  }
  
  return 0;
}