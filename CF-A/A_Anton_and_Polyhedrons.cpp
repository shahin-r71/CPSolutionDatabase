#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,sum=0;
    string s;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s;
        if(s[0]=='T') sum+=4;
        if(s[0]=='C') sum+=6;
        if(s[0]=='O') sum+=8;
        if(s[0]=='D') sum+=12;
        if(s[0]=='I') sum+=20;
    }
    cout<<sum<<"\n";
    return 0;
}
