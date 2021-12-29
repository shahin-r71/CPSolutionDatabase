#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,j;
    cin>>n;
    long long int a[n-1];
    for(j=0;j<(n-1);j++){
        cin>>a[j];
    }
    int l=n-1;
    sort(a,a+l);

    for(long long int i=0;i<n-1;i++){
        if(a[i]!=(i+1)){
            cout<<(i+1)<<"\n";
            break;
        }while(i==(n-2)){
            cout<<n<<"\n";
            break;
        }

    }
    

    return 0;
}