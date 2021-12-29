#include <bits/stdc++.h> 
using namespace std; 



int main() 
{ 
    ios_base::sync_with_stdio(false); cin.tie(NULL);  

    int n;
    cin>>n;
    int cnt=0;
    char a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        a[i]=tolower(a[i]);
    }
    
    sort(a,a+n);
    

    for(int i=0;i<n-1;i++){
        if(a[i]!=a[i+1]){
            cnt++;
        }else if(i==(n-2)&&(a[i]==a[i+1])){
            cnt++;
        }
        if(i==(n-2)&&(a[i]!=a[i+1])){
            cnt++;
        }
        //cout<<i<<cnt<<"\n"; 
    }
 //  cout<<cnt;
    if(cnt>=26){
        cout<<"YES"<<"\n";
    }else{
        cout<<"NO"<<"\n";
    }
        
   
    return 0; 
} 
