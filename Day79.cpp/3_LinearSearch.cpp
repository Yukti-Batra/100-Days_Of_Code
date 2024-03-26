#include<bits/stdc++.h>
using namespace std;
void Print(int arr[],int size){
    cout<<"Size of array is "<<size<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
bool Search(int arr[],int size, int target){
    Print(arr,size);
    if(size==0){
        return false;
    }
    if(arr[0]==target){
        return true;
    }
    else{
        bool ans=Search(arr+1,size-1, target);
        return ans;
    }
}
int main(){
    int arr[5]={1,2,3,4,5};
    int size=5;
    int target=3;
    if(Search(arr,size,target)){
        cout<<"Foundddd";
    }
    else{
        cout<<"Nooooooo";
    }
}