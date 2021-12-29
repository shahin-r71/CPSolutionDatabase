#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    if(n%2==0) cout<<(n/2)<<"\n";
    else{
        n+=1;
        cout<<-(n/2)<<"\n";
    }

    return 0;
}