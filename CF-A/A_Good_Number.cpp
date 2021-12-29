#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,k,c=0;
    cin>>n>>k;
    while(n--){
        ll temp;
        cin>>temp;
        bool digit[10]={false};
        bool s=true;
        while(temp){
            int l=temp%10;
            digit[l]=true;
            temp=temp/10;
        }
        if(s){
        for(int i=0;i<=k;i++){
            if(!digit[i]){
                s=false;
                break;
            }
        }
        }
        if(s) c++;
    }
    cout<<c;
    return 0;
}
