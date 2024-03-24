#include<iostream>
using namespace std;
int factorial(int n){
    if(n==0){
        return 1;
    }
    
    // we can also write it as 
    int choti=factorial(n-1);
    cout<<"Choti is "<<choti<<endl;
    int badi= n*choti;
    cout<<"badi is "<<badi<<endl;
    return badi;  
    // return n* factorial(n-1);
}
int main(){
    int n;
    cin>>n;
    int ans=factorial(n);
    cout<<ans;
}