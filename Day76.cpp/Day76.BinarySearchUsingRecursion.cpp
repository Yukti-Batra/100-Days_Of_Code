#include<bits/stdc++.h>
using namespace std;
int Binary(vector<int> &nums, int target,int start,int end){
    if(start>end){
        return -1;
    }
    int mid=start+(end-start)/2;
    if(nums[mid]==target){
        return mid;
    }
    if(nums[mid]>target){
        Binary(nums,target,start,mid-1);
    }
    else if (nums[mid]<target){
        Binary(nums,target,mid+1,end);
    }
}
int search(vector<int> &nums, int target) {
    int end=nums.size()-1;
        return Binary(nums,target,0,end);
}