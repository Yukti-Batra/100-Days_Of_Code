#include<bits/stdc++.h>
using namespace std;
int findUnique(int *arr, int size)
{
    //arr and size already given in question 
    int ans=0;
    for(int i=0;i<size;i++){
        ans=ans^arr[i];
    }
    return ans;
}