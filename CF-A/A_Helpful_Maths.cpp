#include <bits/stdc++.h> 
using namespace std; 



int main() 
{ 
    // added the two lines below 
    ios_base::sync_with_stdio(false); cin.tie(NULL);  
    string s;
    cin>>s;
    sort(s.begin(),s.end());
   // cout<<s;
    int l=s.size();
    char m[100];int j=0;
    for(int i=0;i<l;i++){
        if(s[i]!='+'){
            m[j]=s[i];
            j++;
        }
    }
    for(int p=0;p<j-1;p++){
        cout<<m[p]<<"+";
    }
    cout<<m[j-1]<<"\n";


    return 0; 
} 
