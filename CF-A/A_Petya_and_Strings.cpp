#include<iostream>
#include<string.h>

using namespace std;
int main(){
ios_base::sync_with_stdio(0);cin.tie(NULL);

string a,b;
cin >> a >> b;
for(int i=0;i<a.length();i++){
    a[i]=tolower(a[i]);
    b[i]=tolower(b[i]);
}
if(a==b) cout<<"0";
for(int i=0;i<a.length();i++){
    if(a[i]>b[i]){cout<<"1";
    break;}
    else if (a[i]<b[i]){cout<<"-1";
    break;}
}


}