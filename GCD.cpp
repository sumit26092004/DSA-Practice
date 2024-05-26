#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    while(a>0 && b>0){
        if(a>b){
            a=a%b;
        }
        else{
            b=b%a;
        }
        if(a==0){
            cout<<"GCD is: "<< b<<endl;;
        }

        cout<<"GCD is: "<<a<<endl;
    }
}