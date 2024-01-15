#include<bits/stdc++.h>
using namespace std;
void reverseArray(vector<int> &arr , int m){
    int start=m+1;
    int end=arr.size()-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }     	
}