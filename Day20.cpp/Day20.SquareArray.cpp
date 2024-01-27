#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            int number=nums[i];
            ans.push_back(number*number);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};