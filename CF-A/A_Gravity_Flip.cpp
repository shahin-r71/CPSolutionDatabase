#include<iostream>

using namespace std;

void bubleSort(int arr[],int n);
void PrintArr(int arr[],int n);

int main(){
    ios_base:: sync_with_stdio(false);cin.tie(NULL);

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }
    bubleSort(arr,n);
    PrintArr(arr,n);

    return 0;
}

void bubleSort(int arr[],int n){

    for(int i=0;i<n-1;i++){
        int flag=0;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag=1;
            }
        }if(flag==0) break;
    }

}
void PrintArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout << "\n";
}