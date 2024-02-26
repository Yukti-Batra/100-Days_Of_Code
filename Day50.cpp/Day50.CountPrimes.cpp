#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countPrimes(int n) {
        vector<bool> ans(n+1,true);
        ans[0]=ans[1]=false;
        int count=0;
        for(int i=2;i<n;i++){
            if(ans[i]){
                count++;
                for(int j=2*i;j<n;j=j+i){
                    ans[j]=0;
                }
            }
        }
        return count;
    }
};