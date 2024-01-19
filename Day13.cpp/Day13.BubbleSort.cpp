#include <bits/stdc++.h> 
using namespace std;
void bubbleSort(vector<int>& arr, int n)
{   
    for(int i=0;i<n-1;i++){  //if we take i=1 to n then j will be 0 to n-i
        //This is used for number of rounds taken 
        bool swapped =false; //to optimise the code (if already sorted)
        for(int j=0;j<n-i-1;j++){
            //this is for sorting process and as the rounds complete last elements get sorted and are removed from next round by n-i-1
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }
        if(swapped==false){
            break;
        }
    }
}
