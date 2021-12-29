#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,sum=0;
    cin>>n;
    int a[n],b[n],x,y;
    int l=n;
    for(int i=0;i<l;i++){
        scanf("%d%d",&x,&y);
        a[i]=x;
        b[i]=y;
    }
    for(int i=0;i<l;i++){
        for(int j=0;j<l;j++){
            if(a[i]==b[j]){
                sum++;
            }
        }
    }
    cout<<sum<<"\n";

    return 0;
}