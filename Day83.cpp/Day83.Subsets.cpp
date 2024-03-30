#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
void solve(int arr[],int n,int index,vector<int>output,vector<vector<int>> &ans){
    if(index>=n){
        ans.push_back(output);
        return;
    }
    // int x=output.size();
    // for(int i=0;i<x;i++){
    //     cout<<output[i]<<" ";
    // }cout<<endl;
    
    //exclude
    solve(arr,n,index+1,output,ans);
    //include
    int element=arr[index];
    output.push_back(element);
    solve(arr,n,index+1,output,ans);
}
int main(){
    vector<vector<int>> ans;
    vector<int>output;
    int arr[3]={1,2,3};
    int index=0;
    solve(arr,3,index,output,ans);
    int size=ans.size();
    for(int i=0;i<size;i++){
        for(int j=0;j<ans[i].size();j++){
        cout<<ans[i][j];
        }
        cout<<endl;
    }
    return 0;
}