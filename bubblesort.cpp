#include<iostream>
using namespace std;

int main(){
    int arr[6]={1,4,6,7,2,4};
    int n=6;
    for(int i=n-1; i>=0; i--){
        for(int j=0; j<n; j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
     for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
}
