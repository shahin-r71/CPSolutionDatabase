#include <bits/stdc++.h> 
using namespace std; 



int main() 
{ 
    // added the two lines below 
    ios_base::sync_with_stdio(false); cin.tie(NULL);  

    int a[4],cl=1;
    for(int i=0;i<4;i++){
        cin>>a[i];

    }
    sort(a,a+4);
    for(int i=1;i<4;i++){
        if(a[i]!=a[i-1]){
            cl++;
        }
    }
    cout<<(4-cl)<<"\n";


    return 0; 
} 
