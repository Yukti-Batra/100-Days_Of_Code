#include<bits/stdc++.h>
using namespace std;
int firstOccurence(vector<int>& arr, int n, int k){
    vector<int> result;
    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e) {

        if(arr[mid] == k){
            ans = mid;
            e = mid - 1;
        }
        else if(k > arr[mid]) {//Right me jao
            s = mid + 1;
        }
        else if(k < arr[mid]) {//left me jao
            e = mid - 1;
        }

        mid = s + (e-s)/2;
    }
    return ans;
};
int lastOccurence(vector<int>& arr,int n,int k){
     int s = 0,  e= n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e) {

        if(arr[mid] == k){
            ans = mid;
            s = mid + 1;
        }
        else if(k > arr[mid]) {//Right me jao
            s = mid + 1;
        }
        else if(k < arr[mid]) {//left me jao
            e = mid - 1;
        }

        mid = s + (e-s)/2;
    }
    return ans;
};
pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    pair<int,int> p;
    p.first=firstOccurence(arr, n, k);
    p.second=lastOccurence(arr,n, k);
    return p;
};
