#include <bits/stdc++.h> 
using namespace std; 



int main() 
{ 
    // added the two lines below 
    ios_base::sync_with_stdio(false); cin.tie(NULL);  

    int a,b,c,d,i=1;
    cin>>a>>b;
    while(1){
        c=a*i;
        if(c%10==0){
            cout<<i<<"\n";
            break;
        }
        else if(c%10!=0){
            d=c%10;
            if(d==b){
                cout<<i<<"\n";
                break;
            }
        }
        i++;
    }
    return 0; 
} 
