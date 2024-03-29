#include<iostream>
using namespace std;
int Partition(int arr[],int start,int end){
    int pivot=arr[start];
    int count=0;
    //placing the pivot element at correct position
    for(int i=start+1;i<=end;i++){
        if(arr[i]<=pivot){
            count++;
        }
    }
    //place pivot at correct position
    int PivotIndex=start+count;
    swap(arr[PivotIndex],arr[start]);

    //left and right part
    int i=start,j=end;
    while(i<PivotIndex && j>PivotIndex){
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<PivotIndex && j>PivotIndex){
            swap(arr[i++],arr[j--]);
        }
    }
     return PivotIndex;
}
void QuickSort(int arr[],int start,int end){
    if(start>=end){
        return;
    }
    //partition
    int p=Partition(arr,start,end);
    QuickSort(arr,start,p-1);  //left part sort
    QuickSort(arr,p+1,end);   //right part sort
}
int main(){
    int arr[5]={2,4,1,3,5};
    int n=5;
    QuickSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}