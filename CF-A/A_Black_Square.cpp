#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,sum=0;
    int a[4];
    cin>> a[0] >> a[1] >> a[2] >>a[3];
    string s;
    cin>>s;
    for(int j=0;j<s.length();j++){
        
        sum+=a[s[j]-'1'];
       
    }

   cout<<sum<<"\n";
    return 0;
}