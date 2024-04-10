#include<bits/stdc++.h>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
    
        for (int i = n - 1; i >= 0; --i) {
            digits[i]++;
        
        if (digits[i] < 10)
            return digits;
        
        digits[i] %= 10;
        }

        digits.insert(digits.begin(), 1);
        return digits;
    }
};