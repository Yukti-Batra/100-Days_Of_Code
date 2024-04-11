//Return true if there is duplicate in array
#include<bits/stdc++.h>
using namespace std;
bool Duplicate(int arr[],int n){
    sort(arr,arr+5);
    bool flag=false;
    for(int i=0;i<n;i++){
        if(arr[i]==arr[i+1]){
            flag=true;;
        }
    }
    return flag;
}
int main(){
    int arr[5]={1,2,3,2,1};
    if(Duplicate(arr,5)){
        cout<<"Hasss Duplicatesss";
    }
    else{
        cout<<" NO Duplicate";
    }
}