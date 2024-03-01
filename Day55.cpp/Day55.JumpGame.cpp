#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        if(n==1){
            return true;
        }
        while(i<n){
                int temp=nums[i];
                if(temp==0 && i!=n-1){
                    int j=i-1;
                    while(j>=0 && nums[j]<=i-j){
                        j--;
                    }
                    if(j<0){
                        return false;
                    }
                    i=j;
                }
                else{
                    i+=temp;
                }

                if(i>=n-1){
                    return true;

            }
    }
    return false;
    }
};