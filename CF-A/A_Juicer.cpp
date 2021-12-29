#include <bits/stdc++.h> 
using namespace std; 



int main() 
{ 
    // added the two lines below 
    ios_base::sync_with_stdio(false); cin.tie(NULL);  
    int n,a,b,sum=0,r=0;
    cin>>n>>a>>b;
    int s[n];
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    for(int j=0;j<n;j++){
        if(s[j]<=a){
            sum+=s[j];
        }
        if(sum>b){
            r++;
            sum=0;
        }
    }
    cout<<r<<"\n";


    return 0; 
} 
