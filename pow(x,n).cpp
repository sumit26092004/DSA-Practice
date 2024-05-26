#include<iostream>
using namespace std;

double pow(int x, int n){
    double ans= 1.0;
    for(int i=0;i<n;i++){
        ans*=x;
    }
    return ans;


}
int main(){
    int x=2;
    int n=10;
    int ans =  pow(x,n);
    cout<<"Power is: "<<ans<<endl;
}