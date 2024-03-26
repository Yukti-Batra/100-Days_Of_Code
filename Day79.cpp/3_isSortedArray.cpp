#include<bits/stdc++.h>
using namespace std;
bool isSorted(int arr[],int size){
    //base case
    if(size==0 || size==1){
        return true;
    }
    //processing
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        bool ans=isSorted(arr+1,size-1);
        return ans;
    }
}
int main(){
    int arr[5]={1,2,3,4,5};
    int size=5;
    bool ans= isSorted(arr,size);
    if(ans){
        cout<<"Sorteddd";
    }
    else{
        cout<<"Not Sorteddd";
    }
}