#include<bits/stdc++.h>
using namespace std;
int getSum(int arr[], int size){
    if(size==0){
        return 0;
    }
    if(size==1){
        return arr[0];
    }
    //WE CAN ALSO WRITE IT AS 
    // int RemainingPart=getSum(arr+1,size-1);
    // int sum=arr[0]+RemainingPart; 

    int sum=arr[0]+getSum(arr+1,size-1);
    return sum;
}
int main(){
    int arr[5]={1,2,3,4,5};
    int size=5;
    getSum(arr,size);
}