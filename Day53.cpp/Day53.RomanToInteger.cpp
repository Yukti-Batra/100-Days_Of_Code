#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> romanMap = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };       
        int result = 0;
        int preValue = 0;        
        for (int i = s.size() - 1; i >= 0; i--) {
            int curValue = romanMap[s[i]];
            
            if (curValue < preValue) {
                result -= curValue;
            } else {
                result += curValue;
            }            
            preValue = curValue;
        }
        return result;
    }
};