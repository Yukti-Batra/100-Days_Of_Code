
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int rows=matrix.size();
        int cols=matrix[0].size();

        int count=0;
        int totalelements=rows*cols;
        
        int StartingRow=0;
        int StartingCol=0;
        int EndingRow=rows-1;
        int EndingCol=cols-1;

        while(count<totalelements){

            //for StartingRow
            for(int index=StartingCol ;count<totalelements && index<=EndingCol;index++){
                ans.push_back(matrix[StartingRow][index]);
                count++;
            }
            StartingRow++;

            //for EndingCol
            for(int index=StartingRow ;count<totalelements && index<=EndingRow;index++){
                 ans.push_back(matrix[index][EndingCol]);
                 count++;
            }
            EndingCol--;

            //For EndingRow
            for(int index=EndingCol;count<totalelements && index>=StartingCol;index--){
                ans.push_back(matrix[EndingRow][index]);
                count++;
            }
            EndingRow--;

            //StartingCol
            for(int index=EndingRow;count<totalelements && index>=StartingRow;index--){
                ans.push_back(matrix[index][StartingCol]);
                count++;
            }
            StartingCol++;
        }
        return ans;
    }
};