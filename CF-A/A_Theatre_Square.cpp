#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll m,n,a;
    cin >> m>>n>>a;
    ll x,y;
    x=m/a;
    if(x>0 && m%a!=0) x++;
    else if (x==0) x++;
    y=n/a;
    if(y>0 && n%a!=0) y++;
    else if(y==0) y++;
    cout<<(x*y);
    return 0;
}