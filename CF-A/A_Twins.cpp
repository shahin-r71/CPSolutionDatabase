#include <bits/stdc++.h> 
using namespace std; 



int main() 
{ 
    ios_base::sync_with_stdio(false); cin.tie(NULL);  

    int n,i,j;
    cin>>n;
    int cnt=0,flag=1;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);

    int sum1=0,sum2=0;
    while(flag){
        for(i=(n-1); ;i--){
            sum1+=a[i];
            cnt++;
            for(j=0;j<i;j++){
                sum2+=a[j];
            }
            if(sum1>sum2){
                flag=0;
                break;
            }else sum2=0;

        }
    }    
    cout<<cnt<<"\n";

   
    return 0; 
} 
