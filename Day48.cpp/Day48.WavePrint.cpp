#include <bits/stdc++.h> 
using namespace std;
vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    vector<int>ans;
    for(int col=0;col<mCols;col++){
        if(col&1){
            for(int row=nRows-1;row>=0;row--){
                ans.push_back(arr[row][col]);
            }
        }
        else{
            for(int row=0;row<nRows;row++){
                ans.push_back(arr[row][col]);
            }
        }
    }
    return ans;
}