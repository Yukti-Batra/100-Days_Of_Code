#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> findTriplets(vector<int> arr, int n, int K) {
    vector<vector<int>> ans;
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n - 2; i++) {
        if(i==0 || (i>0 && arr[i]!=arr[i-1] )){
        int left = i + 1;
        int right = n - 1;
        while (left < right) {
            int currentSum = arr[i] + arr[left] + arr[right];
            if (currentSum == K) {
                ans.push_back({arr[i], arr[left], arr[right]});
                // Move both pointers to find next distinct triplet
                left++;
                right--;
                while (left < right && arr[left] == arr[left - 1]) left++; // Avoid duplicates
                while (left < right && arr[right] == arr[right + 1]) right--; // Avoid duplicates
            } else if (currentSum < K) {
                left++;
            } else {
                right--;
            }
        }
    }
}
    return ans;
}
