#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,sum=0,uc=0;
   // cin>>n;
    int a[4];
    for(int i=0;i<4;i++){
        cin>>a[i] ;
    }
    string s;
    cin>>s;
    for(int j=0;j<s.size();j++){
        if(s[j]==1) sum+=a[0];
        if(s[j]==2) sum+=a[1];
        if(s[j]==3) sum+=a[2];
        if(s[j]==4) sum+=a[3];
    }

    cout<<sum<<"\n";
    return 0;
}