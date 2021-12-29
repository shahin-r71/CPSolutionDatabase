
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    int l,countL=0,countU=0,i;

    string s;

    cin>>s;

    l=s.length();
    for(i=0;i<l;i++){
        if(s[i]>=65 && s[i]<=90)
         countU++;
         else
            countL++;
    }
    if(countL<countU){
        transform(s.begin(),s.end(),s.begin(), ::toupper);
        cout<<s<<"\n";
    }else{
       transform(s.begin(),s.end(),s.begin(), ::tolower);
       cout<<s<<"\n";
    }



    return 0;

}