#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0,j=0,k=0;
        while(i<m && j<n){
            if(nums1[i]<=nums2[j]){
                nums1[k]=nums1[i];
                i++;
            }
            else{
                nums1[k]=nums2[j];
                j++;
            }
          k++;
        }
        while(i<m){
            nums1[k]=nums1[i];
            i++;
            k++;
        }
       while(j<n){
           nums1[k]=nums2[j];
           j++;
           k++;
       }
    }
};
