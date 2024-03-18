#include<iostream>
using namespace std;
class Solution {
public:
    int arrangeCoins(int n) {
        int count=0,sum=0,ans=0;
        for(int i=1;i<=n;i++)
        {
            sum+=i;
             n=n-sum;
            if(n>=0)
            {
                ans=i;
            }
            sum=0;
        }
        return ans;
    }
};