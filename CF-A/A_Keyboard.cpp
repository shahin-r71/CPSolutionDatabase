#include <bits/stdc++.h> 
using namespace std; 



int main() 
{ 
    ios_base::sync_with_stdio(false); cin.tie(NULL);  

    char s[]="qwertyuiopasdfghjkl;zxcvbnm,./";
    int x=strlen(s),i,j;
    char ch;
    cin>>ch;
    string a;
    cin>>a;
    int b=a.size();
    char nw[b];
    for(i=0;i<b;i++){
        if(ch=='R'){
            for(j=0;j<x;j++){
                if(a[i]==s[j]){
                    nw[i]=s[j-1];
                    break;
                }
            }
        }else{
            for(j=0;j<x;j++){
                if(a[i]==s[j]){
                    nw[i]=s[j+1];
                    break;
                }
                        
        }
    }
    cout<<nw[i];
    }
    cout<<"\n";
    
    return 0; 
} 
