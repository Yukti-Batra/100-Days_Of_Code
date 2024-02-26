#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows=matrix.size();
        int cols=matrix[0].size();
        int RowIndex=0;
        int ColIndex=cols-1;
        while(RowIndex<rows && ColIndex>=0){
            int element= matrix[RowIndex][ColIndex];
            if(element==target){
                return 1;
            }
            if(element<target){
                RowIndex++;
            }
            else{
                ColIndex--;
            }
        }
        return 0;
    }
};