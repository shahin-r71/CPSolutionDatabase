
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    int l,count=0,i,n;

    string s;
    cin>>n;
    cin>>s;

    l=s.length();
    for(i=0;i<l-1;i++){
        if(s[i]==s[i+1]){
            count++;
        }
    }
    cout<<count<<"\n";
 


    return 0;

}