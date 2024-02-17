#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isdone(vector<int> position , int mid , int m)
    {
        int count = 1;
        int left = position[0];
        for(int i = 1 ; i<position.size() ; i++)
        {
            if(position[i]-left>=mid)
            {
                count++;left = position[i];
            }
            
        }
        return count>=m;
    }
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int n = position.size();
        int left = 1;
        int right = position[n-1];
        int ans = right-left;
        if(n==2) return ans;
        while(left<=right)
        {
            int mid = (left+right)/2;
            if(isdone(position , mid , m))
            {
                ans = mid;
                left = mid+1;
            }
            else
            {
                right = mid -1;
            }
        }
        return ans;
    }
};