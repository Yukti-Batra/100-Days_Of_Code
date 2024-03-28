#include<iostream>
#include<vector>
using namespace std;
void Merge(int arr[],int start,int mid,int end){
    vector<int> tmp(end-start+1);
    int left=start,right=mid+1,index=0;
    
    while(left<=mid && right<=end){
        if(arr[left] <= arr[right]){
            tmp[index]=arr[left];
            index++;left++;
        }
        else{
            tmp[index]=arr[right];
            index++;right++;
        }
    }
    while(left <= mid){
        tmp[index]=arr[left];
        index++;left++;
    }                                       // if some extra elements are left in left and right array
    while(right<=end){
        tmp[index]=arr[right];
        index++;right++;
    }
    index=0;
    while(start<=end){
        arr[start]=tmp[index];               //copy tmp back to array
        index++;start++;
    }
}
void MergeSort(int arr[],int start,int end){
    if(start==end){
        return;                   // Base Case
    }
    int mid=start+(end-start)/2;
    MergeSort(arr,start,mid);    //Dividing the first half
    MergeSort(arr,mid+1,end);    //Dividing the second half
    Merge(arr,start,mid,end);
}
int main(){
    int arr[5]={5,4,3,2,1};
    MergeSort(arr,0,4);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";     //Prints the sorted array
    }
}