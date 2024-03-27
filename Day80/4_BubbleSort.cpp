#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
void PrintArray(int arr[],int size){
    if(size==0){
        return;
    }
    cout<<arr[0]<<endl;
    PrintArray(arr+1,size-1);
}
void Sort(int arr[],int n){
    if(n==0 || n==1){
        return ;
    }
    //processing   // 1st wala khud krdo ..baaki voh krega
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    Sort(arr,n-1);
}
int main(){
    int arr[5]={2,4,3,5,1};
    Sort(arr,5);
    PrintArray(arr,5);
}







// void Sort(int arr[],int size){
//     PrintArray(arr,size);
//     cout<<" "<<endl;                //yee khud kra tha par kuch gdbd hai 
//     if(size==0||size==1 ){
//         return ;
//     }
//     if(arr[0]>arr[1]){
//         int temp=arr[0];
//         swap(arr[0],arr[1]);
//         arr[1]=temp;
//     }
//     Sort(arr+1,size-1);
// }