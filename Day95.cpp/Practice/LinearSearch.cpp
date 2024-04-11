#include<iostream>
using namespace std;
int main(){
    int arr[5]={0,1,2,3,4};
    int target;
    cin>>target;
    int index;
    for(int i=0;i<5;i++){
        if(arr[i]==target){
            index=i;
        }
    }
    cout<<index;
}