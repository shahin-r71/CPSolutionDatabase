#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,count=1,i;

    cin>>n;
    int s[n];
    
    if(n!=4){
        s[0]=1;
    for(i=1;i<n;i++){
        if(count<=n && count%2 !=0){
            count+=2;
            if(count<=n) s[i]=count;
        }
        if(count>n){
            count=2;
            s[i]=count;
            if(abs(s[i-1]-s[i])==1){
                cout<<"NO SOLUTION";
                break;
            }else continue;
        }
        if(count<=n && count%2==0){
            count+=2;
            if(count<=n){
                s[i]=count;
            }
        }
    }
    }
    if(n==4){
        s[0]=3;
        s[1]=1;
        s[2]=4;
        s[3]=2;
        i=4;
    }

    //cout<<i;

    if(i==n){
        for(int j=n-1;j>=0;j--){
            cout<<s[j];
            if(j<=n-1)cout<<" ";
            if(j==0)cout<<"\n";
        }
    
   }
    return 0;
}