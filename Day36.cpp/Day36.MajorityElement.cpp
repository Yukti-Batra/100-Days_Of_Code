#include<iostream>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
    int n=nums.size();
     int count=0;
     int number=0;
    
    for(int i=0;i<n;i++){
        if(count==0){
            number=nums[i];
            count++;
        }
        else if(number==nums[i]){
            count++;
        }
        else{
            count--;}
        }
    return number; 
    }
};


//     int candidate = nums[0];
    //     int count = 1;
    //     for (int i = 1; i < nums.size(); ++i) {
    //         if (nums[i] == candidate) {
    //                 ++count;
    //              } 
    //         else {
    //         --count;
    //             if (count == 0) {
    //                 candidate = nums[i];
    //                 count = 1; }
    //     }
    // }
    // return candidate;