#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
    int a[5][5],n,x,y;
    for(int i=0;i<5;i++){
        for(int j=0; j<5;j++){
            cin>>a[i][j];
        }
        
    }
    for(int i=0;i<5;i++){
        for(int j=0; j<5;j++){
            if(a[i][j]==1){
                x=abs(i-2);
                y=abs(j-2);
                n=x+y;
            }
        }
        
    }
    cout<<n<<"\n";


    return 0;
}