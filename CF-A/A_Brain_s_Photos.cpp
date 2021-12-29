#include <bits/stdc++.h> 
using namespace std; 



int main() 
{ 
    // added the two lines below 
    ios_base::sync_with_stdio(false); cin.tie(NULL);  
    int x,z,c=0,m=0,y=0,w=0,g=0,b=0;
    cin>>x>>z;
    char a;
    for(int i=0;i<x;i++){
        for(int j=0;j<z;j++){
            cin>>a;
            if(a=='C') c++;
            if(a=='M') m++;
            if(a=='Y') y++;
            if(a=='W') w++;
            if(a=='G') g++;
            if(a=='B') b++;
        }
    }
    if(c==0&&m==0&&y==0) cout<<"#Black&White"<<"\n";
    else cout<<"#Color"<<"\n";
    return 0; 
} 
