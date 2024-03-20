#include<iostream>
using namespace std;
int GetSum(int *arr,int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}
int main(){
    char*c=new char;               
    int* arr1=new int[5];           
    int n;
    cin>>n;
    int *arr=new int[n];     
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=GetSum(arr,n);
    cout<<ans;
    return 0;
}