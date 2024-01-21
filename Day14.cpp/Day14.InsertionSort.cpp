#include <bits/stdc++.h> 
using namespace std;
void insertionSort(int n, vector<int> &arr){
    //rounds
    for(int i=1;i<n;i++){
        int j=i-1;
        
        int target=arr[i];
        for( ;j>=0;j--){
            if(arr[j]>target){
                arr[j+1]=arr[j];
            } else {
                break;
            }
        }
        arr[j+1]=target;
    }
}