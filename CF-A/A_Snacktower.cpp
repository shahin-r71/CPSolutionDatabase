#include <bits/stdc++.h> 
using namespace std; 

const int N=100020;
int a[N]={0};

int main() 
{ 
    ios_base::sync_with_stdio(false); cin.tie(NULL);  

 /*   int n,cnt=0;           //got TLE in 25th test
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
   for(int i=0,j=n;i<n;i++){
       if(a[i]==j){
           for(int k=i;k>=0;k--){
               if(a[k]==j){
                   cout<<a[k]<<" ";
                   j--;
                   cnt++;
                   k=i+1;
               }
               
               
           }
        //   cnt=i+1;
        cout<<"\n";
       }else{
           cout<<" "<<"\n";
       }

   } */

    int n,p;
    cin>>n;
    int m=n;
   
    for(int i=0;i<n;i++){
        cin>>p;
        a[p]=1;
        while(a[m]==1){
            cout<<m<<" ";
            m--;
        }
        cout<<"\n";
    }



    return 0; 
} 
