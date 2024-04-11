#include<bits/stdc++.h>
using namespace std;
void PrintArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[5]={0,1,2,3,4};
    int start=0;int end=4;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    PrintArray(arr,5);
}