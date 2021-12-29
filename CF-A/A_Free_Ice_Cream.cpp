#include <bits/stdc++.h> 
using namespace std; 



int main() 
{ 
    // added the two lines below 
    ios_base::sync_with_stdio(false); cin.tie(NULL);  
    long long int n,x,count=0;
    cin>>n>>x;
    long long int b[n];
    char a[n];
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
        if(a[i]=='+'){
            x+=b[i];
        }else{
            if(x>=b[i]){
                x-=b[i];
            }else{
                count++;
            }
        }

    }
    cout<<x<<" "<<count<<"\n";

    return 0; 
} 
