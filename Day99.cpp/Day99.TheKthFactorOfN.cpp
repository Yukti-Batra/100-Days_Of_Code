#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int kthFactor(int n, int k) {
        vector<int> list;
        for(int i=1;i<=n;i++){
            if(n%i==0){
                list.push_back(i);
            }
        }
        if(k>list.size()){
            return -1;
        }
        return list[k-1];

        // OR
        //  for (int i = 1; i <= n; ++i) {
        //     if (n % i == 0) {
        //         count++;
        //         if (count == k) {
        //             return i; // Return the kth factor
        //         }
        //     }
        // }
        // return -1;
    }
};