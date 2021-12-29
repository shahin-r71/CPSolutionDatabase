#include <bits/stdc++.h> 
using namespace std; 



int main() 
{ 
    ios_base::sync_with_stdio(false); cin.tie(NULL);  

    int n;
    cin>>n;
    long int a[n],cnt=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    long long mini=a[0],maxi=a[n-1];
    if(n<3){
        cout<<"0"<<"\n";
    }else{
        for(int j=1;j<n-1;j++){
            if(a[j]>mini&&a[j]<maxi){
                cnt++;
            }
        }
        cout<<cnt<<"\n";
    }


    return 0; 
} 
