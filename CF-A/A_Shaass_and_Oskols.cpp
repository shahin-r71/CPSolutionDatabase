#include <bits/stdc++.h> 
using namespace std; 



int main() 
{ 
    // added the two lines below 
    ios_base::sync_with_stdio(false); cin.tie(NULL);  
    int x,y;
    cin>>x;
    int s[x];
    for(int i=0;i<x;i++){
        cin>>s[i];
    }
    cin>>y;
    int a[y],b[y];
    for(int j=0;j<y;j++){
        cin>>a[j]>>b[j];
    }
    for(int k=0;k<y;k++){
        
        if(a[k]-2>=0){
            s[a[k]-2]=s[a[k]-2]+b[k]-1;
        }
        if(a[k]<x){
            s[a[k]]=s[a[k]]+(s[a[k]-1]-b[k]);
        }
        s[a[k]-1]=0;        
    }
    for(int l=0;l<x;l++){
        cout<<s[l]<<"\n";
    }
    return 0; 
} 
