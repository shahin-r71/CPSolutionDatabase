#include <bits/stdc++.h> 
using namespace std; 



int main() 
{ 
    // added the two lines below 
    ios_base::sync_with_stdio(false); cin.tie(NULL);  
    char c[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int  x,y,k=0,i;
    cin>>x>>y;
    char s[x];
    for(i=0;i<y;i++){
        s[i]=c[i];
    }
    if((x-y)>y){
        int z=(x-y)/y;
        while(z--){
            for(int j=0;j<y;j++){
                s[i]=c[j];
                i++;
            }
        }
        int r=((x-y)%y);
        while(r--){
            s[i]=c[k];
            k++;
            i++;
        }
    }else{
        for(int j=y;j<x;j++){
            s[j]=c[k];
            k++;
    }
    }

    for(int p=0;p<x;p++){
        cout<<s[p];
    }
    cout<<"\n";



    return 0; 
} 
