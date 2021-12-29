#include <bits/stdc++.h> 
using namespace std; 



int main() 
{ 
    // added the two lines below 
    ios_base::sync_with_stdio(false); cin.tie(NULL);  
    int n,count=0;
    string s;
    
    getline(cin,s);
    n=s.length();
    sort(s.begin(),s.end());

    for(int i=0;i<n-1;i++){
        if(s[i]>=97 && s[i]<=122){
            count++;
            if(s[i]==s[i+1]){
                count--;
            }
        }
    }

    cout<<count<<"\n";


    return 0; 
} 
