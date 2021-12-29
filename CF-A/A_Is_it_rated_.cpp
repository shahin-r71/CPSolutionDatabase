#include <bits/stdc++.h> 
using namespace std; 

//const long long N=1000000000000;
//long long s[N];

int main() 
{ 
    // added the two lines below 
    ios_base::sync_with_stdio(false); cin.tie(NULL);  
    int n,i,j;
    cin>>n;
    int a[n],b[n],c[n];
    for(i=0;i<n;i++){
        cin>>a[i]>>b[i];
        c[i]=a[i];
    }
    for(i=0;i<n;i++){
            if(a[i]!=b[i]){
            cout<<"rated"<<"\n";
            break;
        }
    }
    if(i==n){
        sort(a,a+n,greater<int>());
       // for(int k=0;k<n;k++) cout<<a[k]<<"\n";
        for(j=0;j<n;j++){
            if(a[j]!=c[j]){
                cout<<"unrated"<<"\n";
               // cout<<j;
                break;
            }
            
            if(j==n-1){
                cout<<"maybe"<<"\n";
            }
        }
    }

    return 0; 
} 
