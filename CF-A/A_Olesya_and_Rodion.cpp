#include <bits/stdc++.h> 
using namespace std; 



int main() 
{ 
    // added the two lines below 
    ios_base::sync_with_stdio(false); cin.tie(NULL);  
    int x,y,a;
    cin>>x>>y;
    if(x==1&&y==10){
        cout<<-1<<"\n";
    }else if(x>1&&y==10){
        for(int i=0;i<x-1;i++){
            cout<<1;
        }cout<<0<<"\n";
    }else{
        for(int j=0;j<x;j++){
            cout<<y;
        }cout<<"\n";
    }
    return 0; 
} 
