
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    int l,countL=0,countU=0,i;

    
    cin>>l;
    int s[l];
  
for(int i=0;i<l;i++){
	cin>>s[i];
}
 
    int r=0;
    int k=l-1;

    for(i=0;i<l;i++){
        if(i%2==0){
            if(s[r]>s[k]){
                countL+=s[r];
                r++;
            }else{
                countL+=s[k];
                k--;
            }
            
        
        }
        else {
            if(s[r]>s[k]){
                countU+=s[r];
                r++;
            }else{
                countU+=s[k];
                k--;
            }
            

        }
    }
        cout<<countL<<" "<<countU<<"\n";
   
    



    return 0;

}