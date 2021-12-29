#include <bits/stdc++.h>
using namespace std;
#define ll long long int

bool isprime(ll x){
    ll limit=sqrt(x)+1;
    for(ll i=2;i<=limit;i++){
        if(x%i==0) return 0;
    }
    return 1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,m,i;
    cin>>n>>m;
    for(i=n+1;i<=m;i++){
        if(isprime(i)){
            if(i==m){
                cout<<"YES";
                break;
            }else{
                cout<<"NO";
                break;
            } 
        }
        
    }
    if(i==m+1 && isprime(m)==0) cout<<"NO";
    return 0;
}
