#include<bits/stdc++.h>
using namespace std;
int pivotIndex(int* arr, int size) {
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;

    while(s<e) {
        if(arr[mid]>=arr[0]) {
            s=mid+1;
        }
        else {
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}

int BinarySearch(int* arr, int s, int e, int key) {

    int start = s;
    int end = e;

    // int mid=(start+end)/2;
    int mid = start + ((end-start)/2);

    while (start<=end) {
        if (arr[mid] == key) {
            return mid;
}
        //Shift to right wala part
        else if(arr[mid] < key) {
            start = mid+1;
        }
        //Shift to left wala part
        else if(arr[mid] > key) {
            end = mid-1;
        }

        // mid = (start+end)/2;
        mid = start + ((end-start)/2);
    }
    return -1;
}
int search(int* arr, int n, int k) 
{
    int pivot = pivotIndex(arr, n);
    if(k>=arr[pivot] && k <= arr[n-1]) {
        return BinarySearch(arr, pivot, n-1, k);
    } else {
        return BinarySearch(arr, 0, pivot - 1, k);
    }
}