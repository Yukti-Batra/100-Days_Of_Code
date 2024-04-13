#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int sum=0;
        for(int j=0;j<=n;j++){
             sum=sum+j;
        }
        int sum1=0;
        for(int i=0;i<nums.size();i++){
            sum1=sum1+nums[i];
        }
        int answer=sum-sum1;
        return answer;
    }
};
// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
//         sort(nums.begin(),nums.end());
//         int ans=0;
//         for(int i=0;i<nums.size();i++){
//             ans=ans^i;
//         }
//         int ans1=0;
//         for(int i=0;i<nums.size();i++){
//             ans1=ans1^nums[i];
//         }
//         int answer=ans^ans1;
//         return answer;   
//     }
// };