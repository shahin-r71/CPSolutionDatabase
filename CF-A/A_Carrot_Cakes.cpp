#include <bits/stdc++.h> 
using namespace std; 



int main() 
{ 
    // added the two lines below 
    ios_base::sync_with_stdio(false); cin.tie(NULL);  
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    while(1){
        if(a<=c){
            cout<<"NO"<<"\n";
            break;
        }
        if(d<b){
            cout<<"YES"<<"\n";
            break;
        }
        if(d==b){
            if((a-c)<=c){
               cout<<"NO"<<"\n";
               break; 
            }else{
                cout<<"YES"<<"\n";
                break;
            }
        }
        if(d>b){
            int x=((d/b)*c)+c;
            if(x<a){
                cout<<"YES"<<"\n";
                break;
            }else{
                cout<<"NO"<<"\n";
                break;
            }
        }


    }


    return 0; 
} 
