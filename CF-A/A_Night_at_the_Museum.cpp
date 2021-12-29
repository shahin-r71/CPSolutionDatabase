
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    int k=0,l=0,i,sum=0;

    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(i==0){
            
            k=26-abs(s[i]-97);
            
            l=abs(s[i]-97);
            if(k<l){
                sum+=k;
            }else sum+=l;
            
        }
        if(i!=0){
            k=26-abs(s[i]-s[i-1]);
           // cout<<k;
            l=abs(s[i]-s[i-1]);
            if(k<l){
                sum+=k;
            }else sum+=l;
            }
        }
    
        cout<<sum<<"\n";

    return 0;

}