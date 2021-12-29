#include <bits/stdc++.h> 
using namespace std; 


int main() 
{ 
    
    ios_base::sync_with_stdio(false); cin.tie(NULL);  
    int n;
    cin>>n;
    int s[n];
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    for(int i=0;i<n;i++){
        long long mini;
        long long maxi;
        if(i==0){
            mini=abs(s[i]-s[i+1]);
            maxi=abs(s[i]-s[n-1]);
        }
        else if(i==(n-1)){
            maxi=abs(s[i]-s[0]);
            mini=abs(s[i]-s[i-1]);
        }
        else{
            mini=min(abs(s[i]-s[i-1]),abs(s[i]-s[i+1]));
            maxi=max(abs(s[i]-s[0]),abs(s[i]-s[n-1]));
        }
        cout<<mini<<" "<<maxi<<"\n";
            
    }

    return 0; 
} 
