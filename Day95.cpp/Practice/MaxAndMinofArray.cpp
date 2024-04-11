#include<iostream>
using namespace std;
int main(){
    int arr[5]={0,1,2,3,4};
    int max=INT_MIN; 
    for(int i=0;i<5;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"max element is "<<max;
    int min=INT_MAX;
    for(int i=0;i<5;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<" min is "<<min;
}