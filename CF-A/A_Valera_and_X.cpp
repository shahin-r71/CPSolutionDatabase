#include<bits/stdc++.h>

using namespace std;

int main(){
    char str[305][305];
    int n;
    bool x=true,y=true;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>str[i];
    }
    char c=str[0][0];
    char d=str[0][1];
    for(int i=0;i<n;i++){
        if(str[i][i]!=c || str[i][n-1-i]!=c){
            x=false;
        
            break;
        }
    }
    if(c==d) x=false;
    if(x){
        for(int i=0;i<n;i++){
            if(y==false) break;
            for(int j=0;j<n;j++){
                if(i==j || i==(n-1-j)) continue;
                else if(str[i][j]!=d){
                    y=false;
                    break;
                }
            }
        }
    }
    if(x&&y)cout<<"YES"<<"\n";
    else cout<<"NO"<<"\n";
    return 0;
}