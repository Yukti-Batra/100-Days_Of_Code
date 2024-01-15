#include<bits/stdc++.h>
using namespace std;
int firstOccurance(vector<int>& arr, int n, int x){
int start=0;
int end=n-1;
int ans=-1;
while(start<=end){
    int mid=start+(end-start)/2;
      if(arr[mid]==x){
        ans=mid;
        end=mid-1;
    }
     else if(arr[mid]>x){
       end=mid-1;
    }
    else{
      start=mid+1;
    }
    }
    return ans;
}
int lastOccurance(vector<int>& arr, int n, int x){
  int start=0;
  int end=n-1;
  int ans=-1;
  while(start<=end){
    int mid=start+(end-start)/2;

    if(arr[mid]==x){
       ans=mid;
        start=mid+1;
    }
    else if(arr[mid]>x){
      end=mid-1;
    }
    else{
      start=mid+1;
    }
    }
return ans;
}
bool ispresent(vector<int>& arr, int n, int x){
int low=0;
int high=n-1;
while(low<=high){
    int mid=low+(high-low)/2;
    if(arr[mid]==x){
        return 1;
    }
    else if(arr[mid]>x){
       high=mid-1;
    }
    else{
      low=mid+1;
    }
  }
  return 0;
}
int count(vector<int>& arr, int n, int x) {
int count=0;
int first=firstOccurance(arr,n,x);
int last=lastOccurance(arr,n,x);
  if(ispresent(arr,n,x)){
    count=last-first+1;
    }
  else{
    count=0;
    }
  return count;
}