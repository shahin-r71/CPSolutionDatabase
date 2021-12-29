#include <bits/stdc++.h> 
using namespace std; 

const long long N=1000000000000;
//long long s[N];

int main() 
{ 
    // added the two lines below 
    ios_base::sync_with_stdio(false); cin.tie(NULL);  
    long long n,k,l;
    cin>>n>>k;
    if(n%2==0) l=n/2;
    else l=(n+1)/2;
    if(k<=l) cout<<(2*k)-1<<"\n";
    else cout<<(k-l)*2<<"\n";

    return 0; 
} 
