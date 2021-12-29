#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll gcd(ll a,ll b){
    return b==0 ? a:gcd(b,a%b);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll l,r,x,y,z,s=0;
    cin>>l>>r;
    for(ll i=l;i<=r;i++){
        for(ll j=i+1;j<=r;j++){
            for(ll k=j+1;k<=r;k++){
                if(gcd(i,j)==1 && gcd(j,k)==1 && gcd(i,k)!=1){
                    cout<<i<<" "<<j<<" "<<k;
                    return 0;
                }
            }
        }
    }
    cout<<-1;
    return 0;
}
