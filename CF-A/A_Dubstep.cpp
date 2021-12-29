#include <bits/stdc++.h> 
using namespace std; 



int main() 
{ 
    // added the two lines below 
    ios_base::sync_with_stdio(false); cin.tie(NULL);  
    string s;
    cin>>s;
    int n=s.size();
    int i=0,flag=0;
    while(i<n){
        if(s[i]=='W'&& s[i+1]=='U'&& s[i+2]=='B'){
            i+=3;
        if(flag==1) cout<<" ";
        }else{
            cout<<s[i];
            i++;
            flag=1;
        }
    }
    return 0; 
} 
