#include<iostream>
using namespace std;
void PrintArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[5]={0,1,2,3,4};
    for(int i=0;i<5;i=i+2){
        if((i+1)<5){                         //remember this -- size se bahar naa nikl jae
        swap(arr[i],arr[i+1]);
        }
    }
    PrintArray(arr,5);
}