#include<iostream>

using namespace std;

int main(){
    int a,b,temp,N_candles=0,t_hours;
    cin>>a>>b;
    temp=a;
    while(1){
        if (a>=b){
        a=a-b;
        a+=1;
        N_candles+=1;
        }
        
        if (a<b) break;
    }
    t_hours=temp+N_candles;
    cout<<t_hours<<"\n";

    return 0;
}