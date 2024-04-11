#include<iostream>
using namespace std;
int main(){
    int arr[5]={2,2,3,1,3};
    int ans=0;
    for(int i=0;i<5;i++){
        ans=ans^arr[i];
    }
    cout<<"Unique element is "<<ans;
}