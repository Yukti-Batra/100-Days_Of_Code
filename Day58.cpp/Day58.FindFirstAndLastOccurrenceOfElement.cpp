#include<iostream>
using namespace std;
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int start = findStart(nums, target);
        int end = findEnd(nums, target);
        
        return {start, end};
    }
    
    int findStart(vector<int>& nums, int target) {
        int first = -1;
        int left = 0;
        int right = nums.size() - 1;
        
        while (left <= right) {
            int mid = left + (right - left) / 2;
            
            if (nums[mid] >= target) {
                right = mid - 1;
            } 
            else {
                left = mid + 1;
            }
            
            if (nums[mid] == target) {
                first = mid;
            }
        }
        
        return first;
    }
    
    int findEnd(vector<int>& nums, int target) {
        int last = -1;
        int left = 0;
        int right = nums.size() - 1;
        
        while (left <= right) {
            int mid = left + (right - left) / 2;
            
            if (nums[mid] <= target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
            
            if (nums[mid] == target) {
                last = mid;
            }
        }
        
        return last;
    }
};