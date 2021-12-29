#include <bits/stdc++.h> 
using namespace std; 



int main() 
{ 
    // added the two lines below 
    ios_base::sync_with_stdio(false); cin.tie(NULL);  
    int n,num_p=0,num_q=0;
    string s,p,q;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s;
        if(i==0){
            p=s;
            num_p++;
        }else if(i>0&&s!=p){
            q=s;
            num_q++;
        }else{
            num_p++;
        }
    }
    if(num_p>num_q){
        cout<<p<<"\n";
    }else{
        cout<<q<<"\n";
    }
    return 0; 
} 
