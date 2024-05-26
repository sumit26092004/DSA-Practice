#include<iostream>
using namespace std;

int main(){
    int arr[6]={1,4,6,7,2,4};
    for(int i=0;i<6;i++){
        for(int j=i;j<6;j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }

    }
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
}